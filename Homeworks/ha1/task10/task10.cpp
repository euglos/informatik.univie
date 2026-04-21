#include <iostream>
using namespace std;

int main() {
	cout << "Type any value x: \n";
	double x;

	cin >> x;

	cout << "Type coefficients one by one (4th degree polynomial): \n";
	double a,b,c,d,e;

	cin >> a >> b >> c >> d >> e;

	cout << "Result: " << a*x*x*x*x + b*x*x*x + c*x*x + d*x + e;

	return 0;
}