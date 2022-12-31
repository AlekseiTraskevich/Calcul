#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Calculator {
public:
    double Calculate(string X, string oper, string Y);
    double Calculate(string X, string oper);
    //double Calculate(string oper, string X, int a);
    //double Calculate(string fun, string X, char a);
};

double Sum(double x, double y);
double Difference(double x, double y);
double Product(double x, double y);
double Quotient(double x, double y);
double FactorialN(double x);
double FactorialF(double x);
double Degree(double x, double y);
void automatic_exam(int x);