#include <iostream>
using namespace std;

int n{8};

int g(int n) {
    ::n += n++;
    return n;
}

int f(int n) {
    n += ::n++;
    return g(n);
}

int main()
{
    int n{4};

    cout << f(n);
    cout << n << ::n;

    return 0;
}