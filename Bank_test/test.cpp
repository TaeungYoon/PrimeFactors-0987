#include "pch.h"
#include "../Bank/Account.cpp"

// google test���� �ߺ� �ڵ� ���� ���
// test fixture�� �̿�
// fixture ����� ���� uniform �ʱ�ȭ�� �������

class AccountFixture : public testing::Test {
public:
	Account account{ 10000 };
	void checkBanalce(int expected) {
		EXPECT_EQ(expected, account.getBalance());
	}
};

TEST_F(AccountFixture, CreateAccountInit10000) {
	checkBanalce(10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	checkBanalce(10500);
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	checkBanalce(9400);
}

TEST_F(AccountFixture, Compound) {
	account.predictIncome(1);
	checkBanalce(10500);
}

TEST_F(AccountFixture, SetterInterstRate) {
	account.setInterestRate(4);
	account.predictIncome(1);
	checkBanalce(10400);
}

TEST_F(AccountFixture, CompoundInterestAmountTwoYears) {
	account.predictIncome(2);
	checkBanalce(11025);
}

TEST_F(AccountFixture, CompoundInterestAmountThreeYears) {
	account.setInterestRate(10);
	account.predictIncome(3);
	checkBanalce(13310);
}