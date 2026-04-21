#include <iostream>
using namespace std;

int main() {

    cout << "Enter a four-digit integer: ";
    int n;
    cin >> n;

    string d[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int t1 = n / 1000; // Thousands
    int t2 = (n / 100) % 10; // Hundreds
    int t3 = (n / 10) % 10; // Tens
    int t4 = n % 10; // Units

    cout << d[t1] << "-" << d[t2] << "-" << d[t3] << "-" << d[t4];

    return 0;
}