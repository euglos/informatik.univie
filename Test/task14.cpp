#include <iostream>
using namespace std;

int main()
{
    int i{19};

    cout << static_cast<double>(i / (2 / 2));
    cout << static_cast<double>(i / 2) / 2;
    cout << static_cast<double>(i / 2 / 2);
    cout << static_cast<double>(i) / 2 / 2;

    return 0;
}