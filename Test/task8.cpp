#include <iostream>
using namespace std;

int main()
{
    for (int i{0}; i <= 3; ++i)
        switch (i) {
            case 0: cout << i - 3;
            case 3: cout << i;
                    break;
            case 2: cout << i + 2;
                    break;
            default: cout << 2;
        }

    return 0;
}