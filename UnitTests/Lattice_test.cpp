#ifdef Xcode
#include "Catch2_amalgamated/catch_amalgamated.hpp"
#else
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#endif

#include "../Utils/Lattice.hpp"
#include "../models/Kagome/Ising_Kagome.hpp"

int KagomeLattice_N_sites(int L0, int L1) {
	const int dim = 2;
	std::vector<int> L(dim);
	L[0] = L0;
	L[1] = L1;
	KagomeLattice lattice(L);
	return lattice._N_sites();
}

int KagomeLattice_NN(int L0, int L1, int site_idx, int bond_idx) {
	const int dim = 2;
	std::vector<int> L(dim);
	L[0] = L0;
	L[1] = L1;
	KagomeLattice lattice(L);
	return lattice._NN_of_Site(site_idx, bond_idx);
}

TEST_CASE("KagomeLattice") {
	REQUIRE(KagomeLattice_NN(3, 3, 0, 2) == 8);
	REQUIRE(KagomeLattice_NN(3, 3, 4, 1) == 12);
	REQUIRE(KagomeLattice_NN(3, 3, 16, 0) == 17);
	REQUIRE(KagomeLattice_NN(3, 3, 23, 0) == 24);
}
