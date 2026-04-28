//Read in any number of double values (ending with EOF) and output the mimum, 
//the minimum and the mean of the entered values.

#include <iostream>
using namespace std;

int main() {

    cout << "Enter numbers: ";
    double n;
    double s = 0, c = 0, mx = 0, mn = 0;

    while (cin >> n) {

        s += n;
        c++;

        //we use c==1 only for the first number, otherwise it ll be bad

        if (n > mx || c == 1) {
            mx = n;
        }
        if (n < mn || c == 1) {
            mn = n;
        }
    }

    cout << "Maximum: " << mx << "\n";
    cout << "Minimum: " << mn << "\n";
    cout << "Mean: " << s / c << "\n";

    return 0;
}