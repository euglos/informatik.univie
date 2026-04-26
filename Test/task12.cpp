#include <iostream>
using namespace std;

int main()
{
    cout << sizeof('\\') << sizeof("\\");
    cout << '\'' << "BROT" << '\'';
    cout << sizeof("BROT") << sizeof("\'BROT\'");

    return 0;
}