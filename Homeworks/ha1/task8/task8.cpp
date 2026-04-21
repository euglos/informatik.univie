#include <iostream>
#include <cmath>
using namespace std;

// Time from Earth to Alpha Centauri = 4.367 light years

int main() {
	cout << "Type the spaceship's speed as a percentage of the speed light. \n";
	double x;
	
	cin >> x;
	cout << "On Earth will pass " << 4.367/(x/100) << " years. \n";

	// okay i found out, that time on earth is different to travel time

	cout << "Pilot will feel that like: " 
	<< 4.367/(x/100)*sqrt(1-(x/100)*(x/100)) 
	<< " years passed.";

}