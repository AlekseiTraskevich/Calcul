#include "Calculator.h"


double Calculator::Calculate(string X, string oper) {
	double x = stod(X);

	if (oper == "!") {
		if (x < 0) {
			cout << "Ошибка ввода!\n";
			return 0;
		}
		else {
			if (x == (int)x) {
				return FactorialN(x);
			}
			else {
				return FactorialF(x);
			}
		}
	}
	else if (oper == "log") {
		cout << "Пока не работает";
		return 0;
	}
	else if (oper == "automatic_exam") {
		int ix = (int)x;
		automatic_exam(ix);
		return ix;
	}

	else {
		cout << "\nОшибка ввода!\n";
		return 0;
	}
}

double Calculator::Calculate(string X, string oper, string Y) {
	
	double x = stod(X);
	double y = stod(Y);

	if (oper == "+") {
		return Sum(x, y);
	}
	else if (oper == "-") {
		return Difference(x, y);
	}
	else if (oper == "*") {
		return Product(x, y);
	}
	else if (oper == "/") {
		return Quotient(x, y);
	}
	else if (oper == "^") {
		return Degree(x, y);
	}
	else {
		cout << "Ошибка ввода!\n";
		return 0;
	}
}


//double Calculator::Calculate(string FunOrOper, string X, int a) {
//	double x = stod(X);
//
//	if (FunOrOper == "log") {
//		cout << "Пока не работает";
//		return 0;
//	}
//}


//double Calculator::Calculate(string oper, string X, int a) {
//	double x = stod(X);
//
//	if (oper == "") {
//		
//	}
//}