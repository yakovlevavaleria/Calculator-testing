#include <iostream>

#include "calculator.hpp"
using namespace std;


int main()
{
	double a, b;	
	int c;	
        cin >> a;		
        cin >> b;	       	
        cin >> c;	
        cout << roundp(sumary(a, b)) << endl;	
        cout << roundp(differense(a, b)) << endl;	
        cout << roundp(multiplication(a, b)) << endl;
	double * res = quotient(a, b);
	if (res!=nullptr)
		cout << "a / b = " << * res << endl;
	else
		cout << "a/0 -> error" << endl;
	delete res;
	cout << roundp(power(a, c)) << endl;	
	double *r = squareroot(a);
	if (r) cout << "a^0.5=" << *squareroot(a) << endl;
	else cout << "a < 0 -> error" << endl;
	delete r;
	
	return 0;
}
