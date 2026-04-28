#include<iostream>
#include<cmath>
using namespace std;

// A = 1/2 * r^2 * (a - sin(a))


int main() {
	cout << "Type radius and angle (in Rad.). \n";
	double r, a;

	cin >> r >> a;

	cout << "Area of the circular segment: " << 0.5*r*r*(a-sin(a));

	return 0;
}