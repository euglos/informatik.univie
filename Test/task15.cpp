#include <iostream>
using namespace std;

int f(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << b;
    return a;
}

int main()
{
    int a{2};
    int b{3};
    int c{1};

    c = f(a, c) + b;
    cout << a << b << c;

    return 0;
}