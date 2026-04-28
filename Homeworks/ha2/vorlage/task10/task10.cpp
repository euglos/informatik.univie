#include <iostream>
using namespace std;

int main() {

    cout << "Enter the capacity of the keg and the order quantity: ";
    int c, q;
    cin >> c >> q;

    int kegs;

    if (q % c == 0) {
        kegs = q / c;  
    } 

    else {
        kegs = q / c + 1;
    } 

    cout << "Number of kegs needed: " << kegs;

    return 0;
}