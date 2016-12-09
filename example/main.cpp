#include <iostream>
#include "calculator.hpp"

using namespace std;

int main() {
    double a;
    unsigned int b;
    cin >> a;
    cin >> b;
    if(cin){
    cout << "Cумма " << Sum(a, b)<< endl;
    long double *buf = dev(a, b);
	if (buf!=nullptr)
		cout << "a / b = " << *buf << endl;
	else
		cout << "a/0 -> error" << endl;
	delete buf;
    cout << "Умножение " << Mult(a, b)<< endl;
    cout << "Разность " << Sub(a, b)<< endl;
    cout << "Степень " << Pow1(a, b)<< endl;
    cout << "Корень " << Sqrt3(a)<< endl;
    }
    else cout << "Неправильный ввод";
    system("pause");
}
