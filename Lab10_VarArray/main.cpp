// This is the main file
// Benjamin Goodhart
// 11/14/2019

#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	int arraySize = 0;
	double* varArray = new double[arraySize];

	char userOperation = '\0';
	double userNum = 0;

	while (userOperation != 'q') {

		cout << "Enter operation [a/r/q] and number: " << endl;

		cin >> userOperation;

		if (userOperation == 'a') {
			cin >> userNum;
			addNumber(varArray, userNum, arraySize);
			output(varArray, arraySize);

		}

		else if (userOperation == 'r') {
			cin >> userNum;
			removeNumber(varArray, userNum, arraySize);
			output(varArray, arraySize);

		}
	}
}