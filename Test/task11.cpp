#include <iostream>
using namespace std;

bool between(double a, double b, double c) {
    return b < a && a > c;
}

int main()
{
    constexpr int a{8};
    constexpr int b{-4};

    if (between(a+0.5, a, a-0.5))
        if (between(b-0.5, b, b+0.5))
            cout << a << 2*b;
        else
            cout << 2*b << a;
    else
        if (between(b+0.5, b, b-0.5))
            cout << a*2 << b;
        else
            cout << b << a*2;

    return 0;
}