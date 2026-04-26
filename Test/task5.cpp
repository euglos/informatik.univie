#include <iostream>
using namespace std;

int n{1};

bool f() {
    return n--;
}

int main()
{
    int a{6};
    int b{5};
    int c{7};

    if ((f() && f()) || f()) {
        a = a + 100;
        cout << a + c * 10;
    }
    else {
        c = c + 200;
        cout << c + b * 10;
    }

    cout << n;

    return 0;
}