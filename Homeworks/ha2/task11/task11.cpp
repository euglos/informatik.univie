#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "Enter a number: ";
    double n;
    cin >> n;

    if (floor(n) == n) {
        cout << "An integer.";
    } 
    
    else {
        cout << "Not an integer.";
    }

    return 0;
}