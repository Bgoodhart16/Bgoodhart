// This program gives the user 5 tries to guess the correct random number.
// Benjamin Goodhart
// 09/14/2019

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int userNum;
int countUp = 0;



int main() {

	srand(time(nullptr));
	int random = rand() % 100 + 1;

	do {
		
		cout << "Guess what you think the random number is: ";
		cin >> userNum;

		if (userNum < random)
			cout << "Try guessing higher... ";

		else if (userNum > random)
			cout << "Try guessing lower... ";

		++countUp;

	} while (countUp <= 4 && userNum != random);

	
	if (userNum == random)
		cout << "Congratulations! You guessed the correct number!";

	else cout << "The correct number was: " << random;
} 