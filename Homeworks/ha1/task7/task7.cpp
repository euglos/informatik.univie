#include<iostream>
using namespace std;

int main() {
	cout << "If you want to convert USD to EUR, type 1 and then amount of money. \n";
	cout << "If you want to convert EUR to USD, type 2 and then amount of money. \n";
	double a;
	int c;

	cin >> c;
	cin >> a;

	if(c == 1)
		cout << a << " USD = " << 0.87*a << " EUR";
	if(c == 2)
		cout << a << " EUR = " << 1.15*a << " USD";

	return 0;
}