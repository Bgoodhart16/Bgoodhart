// Main file that holds the program
// Benjamin Goodhart
// 11/22/2019

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector; using std::cout; using std::endl;
using std::cin;

int main() {
	vector <double> userVec(0);
	char userOp = '/0';
	double userNum;

	while (userOp != 'q') {			//Look at previous lab for some inspiration

		cout << "Enter operation [a/r/q] and a number: ";

		cin >> userOp;
		cin >> userNum;


		if (userOp == 'a') {
			userVec.insert(userVec.end(), userNum);

		}

		else if (userOp == 'r') {
			userVec.erase(find(userVec.begin(), userVec.end(), userNum));

		}
	
		cout << "Your numbers: ";

		for (int i = 0; i < userVec.size();) {
			cout << userVec[i] << " ";
			++i;
		}
		
	}
}