#include <iostream>
using namespace std;

int h(int n) {
    return (n + 9) * 10;
}

int g(int n, int a) {
    return h(n)/10 + a;
}

int f(int n) {
    return g(n, 4)*2 + h(n);
}

int main()
{
    cout << f(3);
    return 0;
}