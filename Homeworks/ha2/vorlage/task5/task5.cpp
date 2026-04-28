#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    cout << "Enter cords of first point: \n";
    double x1, y1, z1;
    cin >> x1 >> y1 >> z1;

    cout << "Enter cords of second point: \n";
    double x2, y2, z2;
    cin >> x2 >> y2 >> z2;

    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    cout << "Distance is: " << d;

    return 0;
}