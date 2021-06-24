// This program orders numbers that the user inputs.
// Benjamin Goodhart
// 09-26-19

#include <iostream>
#include "SwapFunctions.h"
using std::cout;
using std::cin;
using std::endl;


int main() {

	
	int in1 = 0, in2 = 0, in3 = 0;

	cout << "Input three numbers: ";
	cin >> in1;
	cin >> in2; 
	cin >> in3;
	

	if (in1 > in2)
		swap(in1, in2);

	if (in1 > in3)
		swap(in1, in3);

	if (in2 > in3)
		swap(in2, in3);

	
	cout <<  " The swapped numbers are: " << in1 << ' ' << in2 << ' ' << in3 << endl;

}