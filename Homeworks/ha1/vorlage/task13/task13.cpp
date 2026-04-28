#include <iostream>
using namespace std;

int main() {
	cout << "Type three values, one by one: ";
	int x,y,z;

	cin >> x >> y >> z;

	int x1 = x % 10;
	int y1 = y % 10;
	int z1 = z % 10;
	int x2 = x / 10;
	int y2 = y / 10;
	int z2 = z / 10;

	cout << z1 << y1 << x1 << x2 << y2 << z2;

	return 0;
}