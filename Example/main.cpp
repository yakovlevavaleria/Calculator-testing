#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Sum of numbers a+b= " << roundp(sum(a, b)) << endl;
	cout << "Subtracion of numbers a-b= " << roundp(subtraction(a, b)) << endl;
	cout << "Multiplication of numbers a*b= " << roundp(multiplication(a, b)) << endl;
	cout << "Division of numbers a/b= " << roundp(division(a, b)) << endl;
	cout << "Power of a^b= " << roundp(power(a,b)) << endl;
	cout << "Squareroot of a " << squareroot(a) << endl;
