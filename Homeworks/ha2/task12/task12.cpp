#include <iostream>
using namespace std;

int main() {

    cout << "Enter two whole numbers: ";
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 % n2 == 0) {
        cout << n2 << " divides " << n1;
    } 
    
    else {
        cout << n2 << " does not divide " << n1;
    }

    return 0;
}