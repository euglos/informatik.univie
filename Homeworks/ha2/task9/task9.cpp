#include<iostream>
using namespace std;

//as i understood, we should input the number of trial, when 0 is rolled
//we definetly should not use random, right?

int main() {

    cout << "Enter bet amount and number of trial, when 0 is rolled: \n";
    double am;
    int t;
    cin >> am >> t;

    double f_am= am * (36 - t);

    if (f_am > 0) {
        cout << "Player wins: " << f_am;
    } 
    
    else if (f_am < 0) {
        cout << "Player loses: " << -f_am;
    } 
    
    else {
        cout << "Player did not win or lose.";
    }

    return 0;
}