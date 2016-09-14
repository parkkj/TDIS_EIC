# TDIS_EIC
This is the version1 Tagged DIS event generator with JLEIC configuration.

Code is separated with proton and neutron tagged.

1/ Reactions: proton tagging

a) ep -> e' + p_s + \pi0,  c) eD -> e' + (p_s1 + \pi-)  + p_s2

: Codes are you need : TDISMC_EIC.cpp, TDISMC_EIC.h

2/ Reactions: neutron tagging

b) ep -> e' + n_s + \pi+, d) eD -> e' + (p_s + \pi0)  + n_s2

: Codes are you need : TDISMC_EICn.cpp, TDISMC_EICn.h

In addition:

1/ cteq-tbls/ directory for proton PDF reading

2/ moment_ld2b.dat file is needed for fermi momentum distribution
