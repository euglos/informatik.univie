#include <iostream>
using namespace std;

int main() {
	double c = (45.0*44*43*42*41*40) / (6*5*4*3*2*1);

	// because (45!)/(45-6)!*(6!)
	// i used 45.0 instead of 45 to avoid warning during compilation

	cout <<  "Probability is: " << 1/c;

	return 0;
}

// could i use #inclide<iomaip> to fix the result value?
// because rn it looks like that "Probability is: 1.22774e-07"