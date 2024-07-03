class Account {
public:
	Account(double money)
		:  balance{ money }, interestRate{5}
	{}

	int getBalance()
	{
		return balance;
	}
	void deposit(double money)
	{
		balance += money;
	}
	void withdraw(double money)
	{
		balance -= money;
	}
	void predictIncome(int n)
	{
		int interest = 0;
		for (int i = 0; i < n; i++) {
			interest = balance * interestRate / 100;
			balance += interest;
		}
	}
	void setInterestRate(double interest)
	{
		interestRate = interest;
	}

private:
	double balance;
	double interestRate;
};