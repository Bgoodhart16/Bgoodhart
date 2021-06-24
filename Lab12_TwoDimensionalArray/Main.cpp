// Keeping track of shots fired in Battleship game
// using multidimentional arrays
// Benjamin Goodhart
// 12/2/2019
// size of the ocean

#include <iostream>

using namespace std;

const int oceanLength = 6;
const int oceanWidth = 6;

int main() {
	bool shots[oceanLength][oceanWidth];
	char userChar, userChar2;
	int number, number2;

	for (int i = 0; i < oceanLength; ++i)
		for (int j = 0; j < oceanWidth; ++j)
			shots[oceanLength][oceanWidth];

	do {
		cout << "A shot? [y/n] " << endl;
		cin >> userChar;

		if (userChar != 'n') {
			cout << "Input letter location then number: ";
			cin >> userChar2 >> number;
		}
		else
			break;

		number = number - 1;
		number2 = userChar2 - 97;
		shots[number][number2] = true;

		cout << " a b c d e" << endl;
		for (int i = 0; i < oceanLength; ++i) {
			cout << i + 1;
			for (int u = 0; u < oceanWidth; ++u)
				if (shots[i][u] == true)
					cout << "* ";
				else
					cout << " ";
			cout << endl;
		}
			
	} while (userChar != 'n');

}