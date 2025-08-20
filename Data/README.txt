North-South Crossing Muon Tracks

One entry = One event
One event can have multiple CRT tracks and Optical Flashes

TREE VAVRIABLES EXPLAINED:

 #RUN DESCRIPTION
 run             = run number, integer
 subrun          = subrun number, integer                                                                                                                                                 
 event           = event number, integer                                                                                                                                          

 #TIMING VARIABLES
 tdc_ch0         = CRT T1 Reset Timestamp [ns],vector                                                                                                                                                     
 tdc_ch1         = BES Timestamp [ns], vector                                                                                                                                             
 tdc_ch2         = RWM Timestamp [ns], vector                                                                                                                                                      
 tdc_ch3         = Flash Trigger Timestamp [ns], vector                                                                                                                                                      
 tdc_ch4         = Event Trigger Timestamp [ns], vector                                                                                                                                            
 tdc_ch0_utc     = same as tdc_ch0 in UNIX format [ns], vector                                                                                                                                            
 tdc_ch1_utc     = same as tdc_ch1 in UNIX format [ns], vector                                                                                                                                            
 tdc_ch2_utc     = same as tdc_ch2 in UNIX format [ns], vector                                                                                                                           
 tdc_ch3_utc     = same as tdc_ch3 in UNIX format [ns], vector                                                                                                                           
 tdc_ch4_utc     = same as tdc_ch4 in UNIX format [ns], vector                                                                                                                           

 #TRIGGER VARIABLES
 ptb_hlt_trigger = IGNORE                                                                                                                   
 ptb_hlt_timestamp = IGNORE
 ptb_hlt_trunmask = High Level Trigger Type, vector
 ptb_hlt_unmask_timestamp = High Level Trigger Timestamp in UNIX format [ns], vector

 #CRT TRACK VARIABLES
 ncrt_trk        = Number of CRT tracks, vector
 crt_trk_id      = Track ID, integer, vector
 crt_trk_ts0     = Time from T0 clock [ns], vector 
 crt_trk_ts0Err  = Time Error from T0 clock [ns], vector 
 crt_trk_ts1     = Time from T1 clock [ns], vector
 crt_trk_ts1Err  = Time Error from T1 clock [ns], vector
 crt_trk_pe      = PhotoElectrons, vector
 crt_trk_tof     = Time Of Flight [ns], vector
 crt_trk_taggers = Taggers Made Up Track, vector
 crt_trk_theta   = Polar Angle [radian], vector
 crt_trk_phi     = Azimuth Angle [radian], vector
 crt_trk_length  = Legnth [cm], vector
 crt_trk_start_x = Start x [cm], vector
 crt_trk_start_y = Start y [cm], vector
 crt_trk_start_z = Start z [cm], vector
 crt_trk_end_x   = End x [cm], vector
 crt_trk_end_y   = End y [cm], vector
 crt_trk_end_z   = End z [cm], vector

 #CRT TRACK VARIABLES
 #Each CRT track is made up from a set of CRT Space Points
 #For each track, save the associated space points
 crt_trk_sp_x    = x [cm], vector of vector
 crt_trk_sp_y    = y [cm], vector of vector
 crt_trk_sp_z    = z [cm], vector of vector
 crt_trk_sp_xe   = x error [cm], vector of vector
 crt_trk_sp_ye   = y error [cm], vector of vector
 crt_trk_sp_ze   = z error [cm], vector of vector
 crt_trk_sp_ts0  = Time from T0 clock [ns], vector of vector
 crt_trk_sp_ts1  = Time from T1 clock [ns], vector of vector
 crt_trk_sp_ts0e = Time of T0 clock error [ns], vector of vector
 crt_trk_sp_ts1e = Time of T1 clock error [ns], vector of vector
 crt_trk_sp_tagger = Tagger, vector of vector

 #PMT METRIC MODULE
 metric_peakpe   = IGNORE
 metric_peaktime = IGNORE
 pmt_timing_type = IGNORE
 pmt_timing_ch   = IGNORE
 
 #Optical Flash

 nopflash        = Number of optical flashes, vector
 flash_id        = Flash ID, vector
 flash_time      = Time [us], vector
 flash_total_pe  = Total PhotoElectrons, vector
 flash_pe_v      = Arrays of PhotoElectrons, vector
 flash_y         = y [cm], vector
 flash_yerr      = y error [cm], vector
 flash_z         = z [cm], vector
 flash_zerr      = z error [cm], vector
 flash_x         = x [cm], vector
 flash_xerr      = x error [cm], vector
 flash_tpc       = which TPC 0 or 1, vector

 #Optical Hits 
 #Each optical flash is made up from a set of optical hits
 #For each flash, save the associated hits
 flash_ophit_time = Peak Time [us], vector of vector
 flash_ophit_risetime = Rise time [us], vector of vector
 flash_ophit_starttime = Start Time [us], vector of vector
 flash_ophit_amp = Amplitude, vector of vector
 flash_ophit_area = Area, vector of vector
 flash_ophit_width = Width, vector of vector
 flash_ophit_pe  = PhotoElectrons, vector of vector
 flash_ophit_ch  = PMT Channel, vector of vector
