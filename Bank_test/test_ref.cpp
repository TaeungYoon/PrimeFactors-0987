#include "pch.h"
#include "../Project16/account.cpp"

class AccountFixture : public testing::Test {
public:
	Account account{ 10000 };

	void checkBalance(int expected) {
		int ret = account.getBalance();
		EXPECT_EQ(expected, ret);
	}
};

TEST_F(AccountFixture, CreateAccountInit10000) {
	checkBalance(10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	checkBalance(10500);
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	checkBalance(9400);
}

TEST_F(AccountFixture, InterestFivePercent) {
	account.setInterest(5);
	account.applyInterest();
	checkBalance(10500);
}

TEST_F(AccountFixture, setInterest) {
	account.setInterest(10);
	account.applyInterest();
	checkBalance(11000);
}

TEST_F(AccountFixture, predictAfterNYear) {
	account.setInterest(10);
	int ret = account.predictIncome(3);
	EXPECT_EQ(13310, ret);
}