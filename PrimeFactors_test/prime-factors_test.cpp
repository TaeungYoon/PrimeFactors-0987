#include "pch.h"
#include "../PrimeFactors/prime-factors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFacors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFacors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}