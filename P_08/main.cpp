#include"gmock/gmock.h"
#include "account.cpp"

TEST(Fibotest, OrderTest) {
	Account account;
	int ret = account.getBalance();
		EXPECT_EQ(10000, ret);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}