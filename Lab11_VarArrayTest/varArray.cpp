// This is where the functions are defined
// Benjamin Goodhart
// 11/8/2019

#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

void varArray::output(){
for (int i = 0; i < size_; ++i)
		cout << array_[i] << ' ';
}

int varArray::check(double number) {
	for (int i = 0; i < size_; ++i) {

		if (array_[i] == number)
			return i;					// Used to have return i;

	}
	return -1;
}

void varArray::addNumber(double number) {

	if (check(number) == -1) {

		double* subtArray = new double[size_ + 1];

		for (int i = 0; i < size_; ++i)
			subtArray[i] = array_[i];


		subtArray[size_] = number;		// size - 1

		delete array_;
		array_ = subtArray;
		++size_;
	}
}

void varArray::removeNumber(double number) {

	bool found = false;
	double* subtArray = new double[size_ - 1];


	for (int i = 0; i < size_; ++i) {

		if (array_[i] == number)
			found = true;


		else {

			if (found == false) {
				subtArray[i] = array_[i];
			}

			else {
				subtArray[i - 1] = array_[i];
			}
		}
	}
	delete array_;
	array_ = subtArray;
	--size_;
}

varArray::varArray(const varArray& varArraySrc) {
	size_ = varArraySrc.size_;
	array_ = new double[size_];
	for (int i = 0; i < size_; ++i)
		array_[i] = varArraySrc.array_[i];		//for overload delete old array

}

varArray& varArray::operator=(const varArray& varArraySrc) {
	if (this != &varArraySrc) {

		size_ = varArraySrc.size_;
		delete[] array_;
		array_ = new double[size_];
		for (int i = 0; i < size_; ++i)
			array_[i] = varArraySrc.array_[i];
	}
	return *this;
}

varArray::~varArray() {
	delete[] array_;
}

varArray::varArray() {
	size_ = 0;
	array_ = 0;
}