void batch()
{
    gROOT->ProcessLine(".L TDISMC_EIC.cpp+");
    gROOT->ProcessLine("mainx(0.055,0.3,0.1,100)");
}
