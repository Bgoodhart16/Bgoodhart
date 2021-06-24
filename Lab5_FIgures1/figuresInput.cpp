// This file prints out the figure that the user chose. 
// Benjamin Goodhart
// 09-22-19


// inlcude statements and headfile inlcusion protection
#include <iostream>
#include "Figures.h"



using std::cout; using std::cin; using std::endl;

int main() {

	int userNum = 0;
	bool trueFalse = true;

	while (trueFalse) {

		int userSize = 0;
		cout << "Input the size of your chosen shape: ";
		cin >> userSize;

		cout << "Would you like to draw a slash, backslash, or a square? " << endl;
		cout << "Put a '1' for a slash, a '2' for the backslash, or a '3' for the square: ";

		cin >> userNum;
		

		//switch statement for the square

		switch (userNum) {
		case 1: //diagonal line

			slash(userSize);
			break;


		case 2: //prints back slash

			backslash(userSize);
			break;


		case 3: // prints out square
			cout << "Would you like the square to have a slash? Enter Y for yes, N for no: ";
			char slash;
			cin >> slash;

			switch (slash) {
			case 'Y':

				squareSlash(userSize);
				break;

			case 'N':

				square(userSize);
				break;
			default:
				cout << "Incorrect input. " << endl;
				
			}
			break;
		default: 
			trueFalse = false;
		}

	}
	return 0;
}