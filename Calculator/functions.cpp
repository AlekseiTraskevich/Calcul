#include <iostream>
using namespace std;

double Sum(double x, double y) {
	return x + y;
}
double Difference(double x, double y) {
	return x - y;
}
double Product(double x, double y) {
	return x * y;
}
double Quotient(double x, double y) {
	if (y == 0) {
		cout << "Division by 0 exception\n";
		return 0;
	}
	return x / y;
}
double Degree(double x, double y) {
	double t = 1;
	if (y != (int)y) {
		cout << "Пока не работает\n";
		return 0;
	}
	else {
		if (y < 0) {
			y *= -1;
			for (int i = 0; i < y; ++i) {
				t *= x;
			}
			t = 1 / t;
		}
		else {
			for (int i = 0; i < y; ++i) {
				t *= x;
			}
		}
		return t;
	}
}





double FactorialN(double x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	return x * FactorialN(x - 1);
}
double FactorialF(double x) {
	cout << "Пока не работает\n";
	return 0;
}