#include"gmock/gmock.h"
#include "prime_factors.cpp"

using namespace std;

TEST(PrimeFactors, PrimTest) {
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
}

int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}