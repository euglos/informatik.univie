#include<iostream>
using namespace std;

int main() {
    
    cout << "Enter three digit number: \n";
    int n;
    cin >> n;

    string m = to_string(n);
    if (m.length() != 3) {
        cout << "Error: number should be three digit. \n";
        return 0;
    }
    int rev = 0;
    for (int i = 0; i < 3; i += 1) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << "Reversed number is: " << rev;
    return 0;
}