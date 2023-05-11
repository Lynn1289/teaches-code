#include "Lattice.hpp"
#include "../models/honeycomb/Ising_honeycomb.hpp"

int Site::dim;
int Site::N_SL;
std::vector<int> Site::L;

const int honeycombLattice::N_SL_SqLatt;
const int honeycombLattice::z_common;
const int honeycombLattice::z_common_half;
constexpr int honeycombLattice::z_SqLatt[N_SL_SqLatt];
