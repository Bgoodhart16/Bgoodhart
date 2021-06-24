// This file defines the functions of printing the figures. 
// Benjamin Goodhart
// 09-22-19

#include <iostream>
#include "Figures.h"


using std::cout; using std::cin; using std::endl;


// the main function that calls the other functions defined in figuresinput.cpp


	int userNum = 0;

//diagonal line
	void slash(int userSize) {
		for (int a = 0; a <= userSize; ++a) {
			for (int b = 1; b <= userSize; ++b) {

				if (a == userSize - b) {
					cout << "*";
					cout << endl;
				}
				else {
					cout << " ";
				}

			}
			cout << endl;
		}
		cout << endl;
	}

// back slash
	void backslash(int userSize) {
		for (int a = 1; a <= userSize; ++a) {
			for (int b = 1; b <= userSize; ++b) {

				if (a == b) {
					cout << "*";
					cout << endl;
				}
				else {
					cout << " ";
				}

			}
			cout << endl;
		}
		cout << endl;
	}

	//printing out the square
 
	void square(int userSize)
	{
		for (int a = 1; a <= userSize; ++a) {
			for (int b = 1; b <= userSize; ++b) {

				if (a == 1 || a == userSize || b == 1 || b == userSize) {
					cout << "*";
				}
				else
					cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	//printing square with slash
	void squareSlash(int userSize) {
		for (int a = 1; a <= userSize; ++a) {
			for (int b = 1; b <= userSize; ++b) {

				if (a == 1 || a == userSize || b == 1 || b == userSize || a == userSize - (userSize - b)) {
					cout << "*";
				}
				else
					cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}