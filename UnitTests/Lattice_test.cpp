#ifdef Xcode
#include "Catch2_amalgamated/catch_amalgamated.hpp"
#else
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#endif

#include "../Utils/Lattice.hpp"
#include "../models/honeycomb/Ising_honeycomb.hpp"

int HoneycombLattice_N_sites(int L0, int L1) {
	const int dim = 2;
	std::vector<int> L(dim);
	L[0] = L0;
	L[1] = L1;
	honeycombLattice lattice(L);
	return lattice._N_sites();
}

int HoneycombLattice_NN(int L0, int L1, int site_idx, int bond_idx) {
	const int dim = 2;
	std::vector<int> L(dim);
	L[0] = L0;
	L[1] = L1;
	honeycombLattice lattice(L);
	return lattice._NN_of_Site(site_idx, bond_idx);
}

TEST_CASE("HoneycombLattice") {
	REQUIRE(HoneycombLattice_NN(3, 3, 0, 2) == 13);
	REQUIRE(HoneycombLattice_NN(3, 3, 9, 1) == 12);
	REQUIRE(HoneycombLattice_NN(3, 3, 5, 0) == 10);
	REQUIRE(HoneycombLattice_NN(3, 3, 15, 0) == 2);
}
