#include <iostream>
using namespace std;

int main()
{
    cout << "K";

    int i{1};
    do {
        for (int j{5}; j > 3; --j) {
            int k{6};
            while (k < 8) {
                cout << ++k;
            }

            cout << j;
        }

        cout << i++;
    } while (i < 3);

    cout << "F";

    return 0;
}