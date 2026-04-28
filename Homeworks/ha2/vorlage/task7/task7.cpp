#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter amount and currency: \n";
    double am;
    string c;
    cin >> am >> c;

    if (c == "EUR") {
        double d = am * 1.15;
        cout << d << " USD";
    } 
    
    else if (c == "USD") {
        double e = am * 0.87;
        cout << e << " EUR";
    } 
    
    else {
        cout << "Wrong currency.";
    }

    return 0;
}