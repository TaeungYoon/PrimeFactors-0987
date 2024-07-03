class Account {
public:
	Account(int money) : balance{ money } {
	}

	int getBalance() {
		return balance;
	}

	void deposit(int money) {
		balance += money;
	}

	void withdraw(int money) {
		balance -= money;
	}

	void setInterest(int targetRate) {
		interestRate = targetRate;
	}

	void applyInterest() {
		balance += getInterest(balance);
	}

	int predictIncome(int targetYear) {
		int result = balance;
		for (int year = 0; year < targetYear; year++) {
			result += getInterest(result);
		}
		return result;
	}

private:
	int getInterest(int targetBalance) {
		return targetBalance * interestRate / 100;
	}

	int balance;
	int interestRate;
};