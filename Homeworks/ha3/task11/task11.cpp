#include <iostream>
using namespace std;

int main() {

    cout << "Enter a natural number: ";
    int n;
    cin >> n;

    int p = 1;

    while (n % 2 == 0) {
        p *= 2;
        n /= 2;
    }

    cout << "Largest number: " << p << "\n";

    return 0;
}