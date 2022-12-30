#pragma once
#include <iostream>
using namespace std;

class Calculator {
public:
    double Calculate(double x, char oper, double y);
    double Calculate(double x, char oper);
};

double Sum(double x, double y);
double Difference(double x, double y);
double Product(double x, double y);
double Quotient(double x, double y);
double FactorialN(double x);
double FactorialF(double x);
double Degree(double x, double y);