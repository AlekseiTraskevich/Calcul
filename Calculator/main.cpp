#include "Calculator.h";
using namespace std;

int main() {
	setlocale(0, "");
	cout << "\tCalculator Console Application\n";
	cout << "  Merry Christmas and Happy New Year!\n\n";
	cout << "Поддерживаемые операции: + - * / ^ ! automatic_exam\n";
	cout << "Введите каждое число/операцию через пробел\n";
	cout << "Например: a + b = ,  a ! = \n\n";

	vector <string> numbs;
	vector <string> opers;
	vector <string> funcs;
	vector <string> errs;
	vector <string> all;

	string str;

	Calculator c;

	double x = 0;
	double y = 0;
	double result = 0;

	while (true) {
		numbs.clear();
		opers.clear();
		funcs.clear();
		errs.clear();
		all.clear();

		while (cin >> str) {
			if (str == "=") {	//это стоп-слово?
				goto FinishReading;	//мне так жаль, Ольга Генадьевна
			}

			all.push_back(str);

			//это число?
			if (str[0] >= '1' && str[0] <= '9' || str[0] == '-' && str.size()>1) {
				int count = 1;
				for (int i = 1; i < str.size(); ++i) {
					if (str[i] <= '9' && str[i] >= '0') {
						++count;
					}

				}
				if (count == str.size()) {
					numbs.push_back(str);	//да, число
				}
				else {
					//cout << "Input error\n";
					errs.push_back(str);
				}
			}

			//это операция?
			//if ((str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/' || str[0] == '^' || str[0] == '!') && str.size() == 1) {
			else if (str == "+" || str == "-" || str == "*" || str == "/" || str == "^" || str == "!") {
				opers.push_back(str);
			}

			//это функция?
			else if (str == "log" || str == "automatic_exam") {
				funcs.push_back(str);
			}

			//значит ошибка
			else {
				//cout << "Input error\n";
				errs.push_back(str);
			}
		}

	FinishReading:		//проверки


		cout << "\nnumbs: \n";
		for (int i = 0; i < numbs.size(); ++i) {
			cout << numbs[i] << endl;
		}
		cout << "\nopers: \n";
		for (int i = 0; i < opers.size(); ++i) {
			cout << opers[i] << endl;
		}
		cout << "\nfuncs: \n";
		for (int i = 0; i < funcs.size(); ++i) {
			cout << funcs[i] << endl;
		}
		cout << "\nerrs: \n";
		for (int i = 0; i < errs.size(); ++i) {
			cout << errs[i] << endl;
		}
		cout << endl;



		if (errs.size()) {	//если вектор ошибок непустой
			cout << "Сдесь ошибки! \n";
			continue;
		}


		//начнем считать


		if (all[0] == numbs[0]) {	//если первая строка число
			if (all[1] == opers[0]) {	//если вторая строка операция
				if (all[2] == numbs[1] && all.size() == 3) {	//если третья строка число и она последняя
					//вызвать Калькулятор число опер число
					result = c.Calculate(numbs[0], opers[0], numbs[1]);
				}
				else if (all.size() == 2) {	//если вторая строка последняя
					//вызвать Калькулятор число опер
					result = c.Calculate(numbs[0], opers[0]);
				}
				else {
					cout << "Error!\n";
				}
			}
		}
		//else if (all[0] == opers[0]) {	//если первая строка операция
		//	if (all[1] == numbs[0] && all.size() == 2) {	//если вторая строка число и она последняя
		//		//вызвать Калькулятор опер число
		//		result = c.Calculate(numbs[0], opers[0]);
		//	}
		//	else {
		//		cout << "Error!\n";
		//	}
		//}
		else if (all[0] == funcs[0]) {	//если первая строка функция
			if (all[1] == numbs[0] && all.size() == 2) {	//если вторая строка число и она последняя
				//вызвать Калькулятор функция число
				result = c.Calculate(numbs[0], funcs[0]);
			}
			else {
				cout << "Error!\n";
			}
		}
		else {
			cout << "Error!\n";
		}

		cout << "  result = " << result << endl;

	}
}


//////////////////////////////////////////////
//////////////////////////////////////////////


//это был main

/*
double x = 0;
double y = 0;
double result = 0;
char oper;
string operat;

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
return 0;
*/