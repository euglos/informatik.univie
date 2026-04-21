#include<iostream>
using namespace std;

int main() {
	cout << "Type item price, quantity and then VAT rate. (0.2 = 20%) \n";
	double p, v;
	int q;

	cin >> p >> q >> v;
	

	cout << "Total price: " << p*q*(1+v);

	return 0;
}