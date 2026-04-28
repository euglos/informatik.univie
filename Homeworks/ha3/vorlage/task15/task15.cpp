#include <iostream>
using namespace std;

int main() {

    cout << "Enter a real number: ";
    string n;
    cin >> n;

    string d[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = 0; i < n.size(); i++) {
        
        char c = n[i];

        if (c == '.') {
            cout << "point";
        } 
        else {
            int dn = c - '0'; 
            cout << d[dn];
        }
        if (i != n.size() - 1) {
            cout << "-";
        }
    }

    return 0;
}