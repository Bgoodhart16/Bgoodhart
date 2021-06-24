// This is the main file
// Benjamin Goodhart
// 11/21/2019

#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	varArray a1;
	double userNum = 0;
	char userOperation = '/0';

	while (userOperation != 'q') {

		cout << "Enter operation [a/r/q] and number: " << endl;

		cin >> userOperation;

		if (userOperation == 'a') {
			cin >> userNum;
			a1.addNumber(userNum);
			cout << "Your array after adding number is: " << endl;
			a1.output();
		}

		else if (userOperation == 'r') {
			cin >> userNum;
			a1.removeNumber(userNum);
			cout << "Your array after removing number is: " << endl;
			a1.output();
		}
	}
}