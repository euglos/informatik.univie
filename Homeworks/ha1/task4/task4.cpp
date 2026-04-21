#include<iostream>
#include<cmath>
using namespace std;

// A = 1/2 * r^2 * a


int main() {
	cout << "Type radius and angle (in Rad.). \n";
	double r, a;

	cin >> r >> a;

	cout << "Area of the circular sector: " << 0.5*r*r*a;

	return 0;
}