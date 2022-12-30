#include <iostream>
#include "Calculator.h";
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Calculator Console Application\n\n";
	cout << "Enter the operation to perform.\n";
	cout << "Format: a+b | a-b | a*b | a/b | a^b |\n";
	cout << "a! | \n\n";

	double x = 0;
	double y = 0;
	double result = 0;
	char oper;

	Calculator c;
	while (true)
	{
		cin >> x >> oper;
		if (oper == '!') {
			result = c.Calculate(x, oper);
		}
		else {
			cin >> y;
			result = c.Calculate(x, oper, y);
		}
		cout << "   = " << result << endl;
	}

	auto w = log(3);

	return 0;
}