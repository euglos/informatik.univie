#include<iostream>
using namespace std;

// F = c * 5/9 + 32


int main() {
	cout << "Type temperature in Celsus. \n";
	double с;

	cin >> с;

	cout << "Temperature in Fahrenheit: " << с * 1.8 + 32;

	return 0;
}