#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double radius;
    cout << "Geben Sie den Radius des Kreises ein: ";
    cin >> radius;

    double flaecheninhalt = 3.1415 * pow(radius, 2);
    cout << "Der Flächeninhalt des Kreises beträgt: " << flaecheninhalt << endl;

    return 0;
}