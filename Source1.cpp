// This program will draw 5 figures. 
// Benjamin Goodhart
// 9/6/2019

#include <iostream> 

using std::cout; using std::cin; using std:endl;

int main() {
	int num;

	cout << "Please enter the size of the blocks you would like to draw." << endl;
	cin >> num;

	for (int a = 0; a < num; ++a)
		for (int b = 0; b < num; ++b) {
			cout << "*";
		}

}