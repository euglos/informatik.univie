#include<iostream>
using namespace std;

int main() {
    
    cout << "Enter values of a, b, c and x: \n";
    double a, b, c, x;
    cin >> a >> b >> c >> x;

    //дабл ар вайперр

    double r = (a * x + b) * x + c;
    cout << "Result is: " << r;

    return 0;
}