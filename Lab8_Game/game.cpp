// This is the main file for battleship game
// Benjamin Goodhart
// 10-31-2019

#include <iostream>
#include <time.h>
#include "battleship.h"


using std::cout; using std::cin; using std::endl;

int main() {
	srand(time(nullptr));
	const int fleetSize = 6;
	Ship ships[fleetSize];

	// Loop to intitalize
	initialize(ships);

	// Loop to deploy
	deploy(ships);
	cout << "Would you like to print the ship locations (Y/N): ";
	char list;
	cin >> list;

	if (list == 'Y')
		printFleet(ships);


	// Loop for firing
	int num = 0;
	while (operational(ships) == false && num < 6) {
		Location userGuess = fire();
		if (check(ships, userGuess) != -1) {
			cout << "Hit! " << endl;
			++num;
		}
		else
			cout << "Miss " << endl;


	}


}