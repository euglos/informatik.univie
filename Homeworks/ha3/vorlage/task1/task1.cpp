// if i understood it right, we can't use && (AND) || (OR) ! (NOT), but we still can use if

#include<iostream>
using namespace std;

int main() {

    cout << "Enter three double numbers: ";
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 <= n2) {

        if (n2 <= n3) {
            cout << n1 << " " << n2 << " " << n3;
        } 
        else if (n1 <= n3) {
            cout << n1 << " " << n3 << " " << n2;
        } 
        else {
            cout << n3 << " " << n1 << " " << n2;
        }
    } 
    
    else {

        if (n1 <= n3) {
            cout << n2 << " " << n1 << " " << n3;
        } 
        else if (n2 <= n3) {
            cout << n2 << " " << n3 << " " << n1;
        } 
        else {
            cout << n3 << " " << n2 << " " << n1;
        }
    }

    return 0;
}