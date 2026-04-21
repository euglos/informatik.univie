#include<iostream>
using namespace std;

int main() {
    
    cout << "Enter three digit number: \n";
    int n;
    cin >> n;

    string m = to_string(n);
    if (m.length() != 3) {
        cout << "Error: number should be three digit.";
        return 0;
    }

    int s = 0;
    for (int i = 0; i < 3; i += 1) {
        s += n % 10;
        n /= 10;
    }

    if (s % 3 == 0) {
        cout << "Number is divisible by 3.";
    } 
    
    else {
        cout << "Number is not divisible by 3.";
    }
    return 0;
}