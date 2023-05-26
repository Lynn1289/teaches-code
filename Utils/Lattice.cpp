#include "Lattice.hpp"
#include "../models/Kagome/Ising_Kagome.hpp"

int Site::dim;
int Site::N_SL;
std::vector<int> Site::L;

const int KagomeLattice::N_SL_KgLatt;
const int KagomeLattice::z_common;
const int KagomeLattice::z_common_half;
constexpr int KagomeLattice::z_KgLatt[N_SL_KgLatt];
