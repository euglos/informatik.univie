#include <iostream>
using namespace std;

int main() {

    cout << "Enter lower and upper bound: ";
    double l, u;
    cin >> l >> u;

    double smaller = 0, inside = 0, larger = 0;
    double n;

    while (cin >> n) {

        if (n < l) {
            smaller++;
        } 
        else if (n > u) {
            larger++;
        } 
        else {
            inside++;
        }
    }

    cout << "Smaller: " << smaller << "\n";
    cout << "Inside: " << inside << "\n";
    cout << "Larger: " << larger << "\n";

    return 0;
}