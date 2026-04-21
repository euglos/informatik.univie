#include <iostream>
using namespace std;

int main() {

    cout << "Enter a non-negative integer: ";
    int n;
    cin >> n;

    long long f = 1; 

    for (int i = 1; i <= n; ++i) {
        f *= i;
    }

    cout << "Factorial equals " << f;

    return 0;
}