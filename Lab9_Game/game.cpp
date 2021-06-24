// This is where the game uses the functions 
// Benjamin Goodhart
// 11/7/2019


#include "battleship.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {
	srand(time(nullptr));
	Fleet myFleet;
	myFleet.deployFleet();
	cout << "Would you like to print the positions of the ships on the grid(Y/N): ";
	char userSwitch;
	cin >> userSwitch;


	if (userSwitch == 'Y')
		myFleet.printFleet();

	if (userSwitch == 'N')
		cout << "Good luck! " << endl;


	while (myFleet.operational() == true) {
		Location userLoc;
		cout << "Input your location for your guess: ";
		userLoc.fire();
		myFleet.isHitNSink(userLoc);
	}
}