// Practice with pointers
// Benjamin Goodhart
// 11/7/2019

#include <iostream>
using std::cout; using std::endl;

int main() {
	const int size = 10;		
	int a[size];		// Array "a" of size "size";
 	int *p;				// Pointer p;


	for (int i = 0; i < 5; ++i)
		a[i] = i;					// Assigns incrimented value to the each array element 

	p = a;							// Tells p to point to the array of a[];

	for (int i = 0; i < 5; ++i)
		cout << p[i] << ' ';
	cout << endl;

/////////////////////////////////////////
	//this is practice dereferencing and referencing.

	int num = 32;
	cout << num << endl;
	int* g = &num;
	*g = 2;
	cout << *g << endl;;


}