// Spells out the inputted number. 
// Benjamin Goodhart
// 8/29/2019

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Input number from 01 to 50: ";
	int number;
	cin >> number;

	const int singles = number % 10;
	const int tens = number / 10;

	if (tens == 1) {
		switch (singles) {
		case 0: 
			cout << " Ten ";
			break;
		case 1: 
			cout << " Eleven ";
			break;
		case 2: 
			cout << " Twelve ";
				break;
		case 3: 
			cout << " Thirteen ";
			break;
		case 4: 
			cout << " Fourteen ";
			break;
		case 5: 
			cout << " Fifteen ";
			break; 
		case 6: 
			cout << " Sixteen ";
			break;
		case 7: 
			cout << " Seventeen ";
			break; 
		case 8: 
			cout << " Eighteen ";
			break; 
		case 9: 
			cout << " Nineteen ";
			break;
		}
	}
	else {
		switch (tens) {
		case 2:
			cout << " Twenty ";
			break;
		case 3:
			cout << " Thirty ";
			break;
		case 4:
			cout << " Fourty ";
			break;
		case 5:
			cout << " Fifty ";
			break;
		}
		switch (singles) {
		case 1: 
			cout << " One ";
			break;
		case 2: 
			cout << " Two ";
			break; 
		case 3: 
			cout << " Three ";
			break;
		case 4: 
			cout << " Four ";
			break;
		case 5: 
			cout << " Five "; 
			break;
		case 6:
			cout << " Six ";
			break;
		case 7: 
			cout << " Seven ";
			break; 
		case 8: 
			cout << " Eight ";
			break; 
		case 9: 
			cout << " Nine ";
			break;
		}
	}
}