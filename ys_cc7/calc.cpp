class Calc {
public:
	int calMinus(int a, int b) {
		//		if (a == 5)
		//			return 4;
		//		return 2;
		return a > b ? a - b : b - a;
		return a - b;
	}

	int getFibo(int n) {
		if (n == 0) return 0;
		if (n <= 2) return 1;
		return getFibo(n - 1) + getFibo(n - 2);
	}
};