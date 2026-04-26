#include <iostream>
using namespace std;

int main()
{
    int i{8415 % 1000};
    for (; i; i /= 10) {
        switch (i % 10) {
            case 1: cout << i;
                    break;
            case 8: cout << 'i';
            case 5: cout << "i";
                    break;
            default: cout << "A" << 8;
        }
    }

    return 0;
}