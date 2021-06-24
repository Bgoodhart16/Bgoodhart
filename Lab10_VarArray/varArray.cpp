// This is where the functions are defined
// Benjamin Goodhart
// 11/8/2019

#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

void output(double* arrayPtr, int size) {
	cout << "Your values of the array are: ";
	for (int i = 0; i < size; ++i)
		cout << arrayPtr[i] << ' ';
	cout << endl;
}

int check(double* arrayPtr, double number, int size) {
	for (int i = 0; i < size; ++i) {

		if (arrayPtr[i] == number)
			return i;					// Used to have return i;

	}
	return -1;
}

void addNumber(double*& arrayPtr, double number, int& size) {

	if (check(arrayPtr, number, size) == -1) {

		double* subtArray = new double[size + 1];

		for (int i = 0; i < size; ++i)
			subtArray[i] = arrayPtr[i];


		subtArray[size] = number;		

		delete arrayPtr;
		arrayPtr = subtArray;
		++size;
	}
}

void removeNumber(double*& arrayPtr, double number, int& size) {

	bool found = false;
	double* subtArray = new double[size - 1];


	for (int i = 0; i < size; ++i) {

		if (arrayPtr[i] == number)
			found = true;


		else {

			if (found == false) {
				subtArray[i] = arrayPtr[i];
			}

			else {
				subtArray[i - 1] = arrayPtr[i];
			}
		}
	}
	delete arrayPtr;
	arrayPtr = subtArray;
	--size;
}

