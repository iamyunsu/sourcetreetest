#include "pch.h"
#include "../ys_cc7/account.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

class AccountFixture : public testing::Test {
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit1000won) {
	EXPECT_EQ(account.getBalance(), 10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, Deposit2) {
	account.deposit(600);
	EXPECT_EQ(account.getBalance(), 10600);
}

TEST_F(AccountFixture, Deposit3) {
	account.deposit(700);
	EXPECT_EQ(account.getBalance(), 10700);
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(account.getBalance(), 9400);
}

TEST_F(AccountFixture, Withdraw2) {
	account.withdraw(700);
	EXPECT_EQ(account.getBalance(), 9300);
}

TEST_F(AccountFixture, Withdraw3) {
	account.withdraw(800);
	EXPECT_EQ(account.getBalance(), 9200);
}
#if 0
#include "../ys_cc7/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestMinus) {
	Calc calc;

	EXPECT_EQ(2, calc.calMinus(4, 2));
	EXPECT_EQ(4, calc.calMinus(5, 1));
	EXPECT_EQ(4, calc.calMinus(1, 5));
	EXPECT_EQ(2, calc.calMinus(2, 4));
}

TEST(TestCaseName, TestFibo) {
	Calc calc;

	EXPECT_EQ(1, calc.getFibo(1));
	EXPECT_EQ(1, calc.getFibo(2));
	EXPECT_EQ(2, calc.getFibo(3));
	EXPECT_EQ(3, calc.getFibo(4));
	EXPECT_EQ(102334155, calc.getFibo(40));
}
#endif