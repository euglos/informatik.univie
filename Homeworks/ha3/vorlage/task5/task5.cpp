#include <iostream>
using namespace std;

int main() {

    cout << "Enter an integer: ";
    int n;
    cin >> n;

    cout << "Addition" << "\n";

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (i + j) % n;
        }
        cout << "\n";
    }

    cout << "Multiplication" << "\n";

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (i * j) % n;
        }
        cout << "\n";
    }

    return 0;
}