#include"gmock/gmock.h"
#include "prime_factors.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}