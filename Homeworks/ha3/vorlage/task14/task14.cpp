#include <iostream>
using namespace std;

int main() {

    cout << "Enter a natural number: ";
    long long n;
    cin >> n;

    int a = 0;

    while (n > 0) {

        int d = n % 10;
        n /= 10;

        long long m = n;

        while (m > 0) {

            if (m % 10 > d) {
                a++;
            }
            
            m /= 10;
        }
    }

    cout << "Amount of inversions: " << a;

    return 0;
}