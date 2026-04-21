#include<iostream>
using namespace std;

int main() {

    cout << "Enter amount of seconds: \n";
    long long s;
    cin >> s;

    long long y1 = s / (365 * 24 * 3600);
    s %= (365 * 24 * 3600);
    long long d1 = s / (24 * 3600);
    s %= (24 * 3600);
    long long h1 = s / 3600;
    s %= 3600;
    long long m1 = s / 60;
    s %= 60;

    cout << y1 << " years, " << d1 << " days, " << h1 << " hours, " << m1 << " minutes and " << s << " seconds. \n";

    cout << "Enter amount of years, days, hours, minutes and seconds: \n";
    long long y2, d2, h2, m2, s2;
    cin >> y2 >> d2 >> h2 >> m2 >> s2;

    long long final_s = y2 * 365 * 24 * 3600 + d2 * 24 * 3600 + h2 * 3600 + m2 * 60 + s2;
    cout << final_s << " seconds.";

    return 0;
}