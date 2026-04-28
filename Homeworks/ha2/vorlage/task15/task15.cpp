#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "Enter the capacity of the keg and the order quantity: ";
    int c;
    double q;
    cin >> c >> q;

    int kegs = ceil(q / c);
    cout << "Number of kegs needed: " << kegs;

    return 0;
}