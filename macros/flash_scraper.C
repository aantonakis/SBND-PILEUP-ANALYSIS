

#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>

#include "TH1.h"
#include "TH2.h"
#include "TString.h"
#include "TFile.h"
#include "THnSparse.h"
#include "TNtuple.h"
#include "TTreeReader.h"
#include "TTreeReaderArray.h"
#include "TVector3.h"
#include "TPRegexp.h"
#include "TObjString.h"
#include "TObjArray.h"
#include "Math/Vector3D.h"


void flash_scraper(const char* input_file, const char* output_file) {

    TFile* f = TFile::Open(input_file, "READ");
    if (!f || f->IsZombie()) {
      std::cerr << "File is a zombie mate" << std::endl;
      return;
    }

    TFile* outfile = new TFile(output_file, "RECREATE");

    TNtuple* flash_tree = new TNtuple("flash_tree", "flash_tree",
        "run:subrun:evt:flash_id:flash_time:flash_total_pe:frame_hlt_gate");
        

    TTreeReader reader("ana/events", f);

    TTreeReaderValue<int> run(reader, "run");
    TTreeReaderValue<int> evt(reader, "event");
    TTreeReaderValue<int> subrun(reader, "subrun");

    // track length cut: use residual range on collection only
    TTreeReaderArray<int> flash_id(reader, "flash_id");

    TTreeReaderArray<double> flash_time(reader, "flash_time");
    TTreeReaderArray<double> flash_total_pe(reader, "flash_total_pe");
    TTreeReaderValue<double> flash_hlt_gate(reader, "frame_hlt_gate");

    while (reader.Next()) {
           
        // How many flashes in this event
        size_t nflashes = flash_id.GetSize();

        for (int i = 0; i < nflashes; ++i) {

          flash_tree->Fill(*run, *subrun, *evt, 
            flash_id[i], flash_time[i], flash_total_pe[i], *flash_hlt_gate);             
        
        }

    }

    
    outfile->cd();   
    flash_tree->SetDirectory(0);
    flash_tree->Write();
    outfile->Close();
    delete flash_tree;
    delete f;
    printf("Finished processing flashes.\n");
}


