// This file defines the functions used in poweball.cpp
// Benjamin Goodhart
// 09-26-19

#include <iostream>;
using std::cout; using std::cin; using std::endl;

int counter = 0;
int SIZE = 20;


void assign(int wins[]) {
	for (int i = 0; i < SIZE; ++i)
		wins[i] = 0;
}

bool check(int wins[], int guess) {
	for (int i = 0; i < SIZE; ++i)
		if (wins[i] == guess)
			return true;
	return false;
}

void draw(int wins[]) {
	while (counter < SIZE) {
		int random = rand() % 100 + 1;
		if (check(wins, random)) {}
		//random = rand() % 100 + 1;
		else {
			wins[counter] = random;
			//if (wins != random)
			++counter;
		}
	}
}

void printOut(int wins[]) {
	cout << "Correct guesses:\n";
	for (int i = 0; i < SIZE; ++i)
		cout << wins[i] << endl;
}


int entry() {
	int g1 = 0;
	cout << "Enter your guess: " << endl;
	cin >> g1;
	return g1;
}