#include <iostream>
using namespace std;

int f(int a, int b) {
    int i{0};
    do {
        ++b;
        ++i;
    } while (i < 2);

    a--;

    return a * b;
}

int main()
{
    int a{731};
    while (a > 0) {
        cout << f(a % 10, a % 2);
        a = a / 10;
    }

    return 0;
}