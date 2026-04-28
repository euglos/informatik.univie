#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "Enter a positive number: ";
    double x;
    cin >> x;

    cout << "Rounded: " << floor(x + 0.5);

    return 0;
}