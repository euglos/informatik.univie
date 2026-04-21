// okay i cant in chemistry, chatgpt said to me that we need 8x g oxygen and we will get 9x ml water

#include <iostream>
using namespace std;

int main() {
	cout << "Type amount (in gramms) of hydrogen, that will be burned. \n";
	double x;

	cin >> x;
	
	cout << "We need " << 8*x << "g of oxygen. \n";
	cout << "And we will get " << 9*x << "ml of water. \n";

	return 0;
}