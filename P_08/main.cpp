#include"gmock/gmock.h"
#include "account.cpp"

using namespace std;

class AccountFixture : public testing::Test {
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000won) {
	//Account account(10000);
	EXPECT_EQ(account.getBalance(), 10000);
}

TEST_F(AccountFixture, Deposit) {
	//Account account(10000);
	account.deposit(500);
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, Withdraw) {
	//Account account(10000);
	account.withdraw(600);
	EXPECT_EQ(account.getBalance(), 9400);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}