#!/bin/sh

SETUP="/cvmfs/sbnd.opensciencegrid.org/products/sbnd/setup_sbnd.sh"
SBNDCODE_VERSION="v10_06_00"
SBNDCODE_QUAL="e26:prof"
CMAKE_VERSION="v3_27_4"

source ${SETUP}
setup sbndcode ${SBNDCODE_VERSION} -q ${SBNDCODE_QUAL}
setup cmake ${CMAKE_VERSION}
