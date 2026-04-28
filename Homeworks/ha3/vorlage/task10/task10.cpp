#include <iostream>
using namespace std;

int main() {

    cout << "Enter an expression: ";
    double n;
    char op;

    cin >> n;

    while (cin >> op && op != '!') {

        double m;
        cin >> m;

        if (op == '+') {
            n += m;
        } 
        else if (op == '-') {
            n -= m;
        } 
        else if (op == '*') {
            n *= m;
        } 
        else if (op == '/') {
            n /= m;
        }
    }

    cout << "Result: " << n << "\n";

    return 0;
}