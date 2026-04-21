#include <iostream>
using namespace std;

int main() {

    cout << "Enter a natural number: ";
    int n;
    cin >> n;

    long long s = 0;

    for (int i = 1; i <= n; i++) {

        long long p = 1;
        for (int j = 0; j < i; j++) {

            p *= i;
        }
        s += p;
    }

    cout << "Sum is: " << s;

    return 0;
}