#include "Calculator.h"

double Calculator::Calculate(double x, char oper) {
	switch (oper) {
	case '!':
		if (x < 0) {
			cout << "Ошибка ввода!\n";
			return 0.0;
		}
		else {
			if (x == (int)x) {
				return FactorialN(x);
			}
			else {
				return FactorialF(x);
			}
		}
	



	default:
		cout << "\nОшибка ввода!\n";
		return 0;
	}
}

double Calculator::Calculate(double x, char oper, double y) {
	switch (oper) {
	case '+':
		return Sum(x, y);
	case '-':
		return Difference(x, y);
	case '*':
		return Product(x, y);
	case '/':
		return Quotient(x, y);
	case '^':
		return Degree(x, y);


	default:
		cout << "Ошибка ввода!\n";
		return 0;
	}
}

