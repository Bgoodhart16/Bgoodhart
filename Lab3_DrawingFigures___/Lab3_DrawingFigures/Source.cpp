// This program will draw 5 figures. 
// Benjamin Goodhart
// 9/6/2019

#include <iostream> 

using std::cout; using std::cin; using std::endl;

int main() {
	int num;

	cout << "Please enter the size of the blocks you would like to draw: ";
	cin >> num;

	// Drawing a square
	// a = columns 
	// b = rows

	int a = 0;
	int b = 0;

	for (int a = 1; a <= num; ++a) {
		cout << "*";
		for (int b = 1; b < num; ++b) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// Print a diagonal line

	for (int a = 0; a <= num; ++a) {
		for (int b = 1; b <= num; ++b) {

			if (a == num - b) {
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

	// Backwards slash

	for (int a = 1; a <= num; ++a) {
		for (int b = 1; b <= num; ++b) {

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

	// Hollow circle

	for (int a = 1; a <= num; ++a) {
		for (int b = 1; b <= num; ++b) {

			if (a == 1 || a == num || b == 1 || b == num) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	// Hollow circle with a slash trough middle

	for (int a = 1; a <= num; ++a) {
		for (int b = 1; b <= num; ++b) {

			if (a == 1 || a == num || b == 1 || b == num || a == num - (num - b)) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}




