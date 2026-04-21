#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Enter p and q: ";
    double p, q;
    cin >> p >> q;

    double d = p * p - 4 * q;

    if (d > 0) {
        double x1 = (-p + sqrt(d)) / 2;
        double x2 = (-p - sqrt(d)) / 2;
        cout << "Roots are: " << x1 << " and " << x2;
    } 
    else if (d == 0) {
        double x = -p / 2;
        cout << "Root is: " << x;
    } 
    else {
        cout << "No roots.";
    }

    return 0;
}