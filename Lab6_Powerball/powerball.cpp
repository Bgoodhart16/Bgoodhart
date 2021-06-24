// This program generates lottery numbers and the user tries to guess them
// Benjamin Goodhart
// 09-26-19

#include <iostream>
#include "powerballFunctions.h"
#include <ctime>


using std::cout;
using std::cin;
using std::endl;

int main() {

	int wins[20];


	// Assigning 0 to all values of the array
	assign(wins);

	

	// Getting the random numbers for the array
	srand(0);
	int counter = 0;


	draw(wins);

	// Checking to see if users guess is correct
	for (int i = 0; i < 3; ++i) {
		
		int g1 = entry();

		
		bool guess = check(wins, g1);
		
		if (guess) {
			cout << "Congrats!" << endl;
			break;
		}
		else
			cout << "Wrong number. " << endl;
	}

	// Printing out the results
	printOut(wins);
}
