#include <iostream>
using namespace std;

int main() {

    //Variant 1

    cout << "Enter three values m1, x1 and n1: \n";
    int m1, x1, n1;
    cin >> m1 >> x1 >> n1;

    cout << static_cast<double>(x1) / m1 * n1 << "\n";

    //Variant 2
   
    cout << "Enter three values m2, x2 and n2: \n";
    double m2, x2, n2;
    cin >> m2 >> x2 >> n2;

    cout << x2 / m2 * n2;

    return 0;
}