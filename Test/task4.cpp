#include <iostream>
using namespace std;

int main()
{
    int i{375};
    do {
        for (int j{i+1}; j > i-1; --j)
            cout << j % 10;
        i /= 10;
    } while (i);

    return 0;
}