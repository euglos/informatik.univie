#include<iostream>
using namespace std;

int main() {
    
    cout << "Enter two natural numbers m and n. \n";
    int m, n;
    cin >> m >> n;

// i guess it would be nice to check if n is less than length of m

    string s = to_string(m);
    if (s.length() < n) {
        cout << "Error: amount of symbols in value m should be more (or equal to n) than value of n.";
        return 0;
    }
    
    for (int i = 1; i < n; i += 1) {
        m /= 10;
    }

    cout << m % 10;
    return 0;
}