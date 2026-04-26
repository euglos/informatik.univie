#include <iostream>
using namespace std;

int main()
{
    int a{4};

    while (++a < 8)
        cout << a++;

    cout << ++a;

    return 0;
}