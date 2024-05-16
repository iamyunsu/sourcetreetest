
class Account {
public:
	Account(int money) : Balance(money) {}
	int getBalance() {
//		if (Balance == 10500) return 10500;
//		if (Balance == 9400) return 9400;
//		return 10000;
		return Balance;
	}
	void deposit(const int money) {
//		Balance= 10500;
//		if (money == 600) Balance = 10600;
//		if (money == 700) Balance = 10700;
		Balance += money;
	}
	void withdraw(const int money) {
//		Balance = 9400;
//		if (money == 700) Balance = 9300;
//		if (money == 800) Balance = 9200;
		Balance -= money;
	}

private:
	int Balance;
};