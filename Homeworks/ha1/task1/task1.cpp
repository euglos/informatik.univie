#include<iostream>
using namespace std;

int main() {
	cout << "Type length and then type width. \n";
	double l, w;
	cin >> l >> w;

	double s = l*w;
	double p = 2*(l+w);

	cout << "Area: " << s << "\n";
	cout << "Perimeter: " << p << "\n";

	return 0;
}