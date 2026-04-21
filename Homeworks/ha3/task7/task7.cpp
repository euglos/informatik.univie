// Check if the sequence
// n i+1 = n i /2 for even n i
// n i+1 = 3n i +1 for odd n i
// always reaches the value 1 for different (arbitrary) positive starting values n 0​ 


#include <iostream>
using namespace std;

int main() {

    cout << "Enter a positive integer: ";
    long long n;
    cin >> n;

    while (n != 1) {

        cout << n << " ";

        if (n % 2 == 0) {
            n = n / 2;
        } 
        else {
            n = 3 * n + 1;
        }
    }
    
    cout << n << "\n";

    return 0;
}