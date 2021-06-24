// This is to test how an iterative construct works.

#include <iostream> 

using std::cin; using std::cout; using std::endl;


//Trying to make a while statement. 

int main() {

	const int max;
	max = 20;
	int n;
	cin >> n;
	while (n != 0) {
		cin >> n;
		if (n > max) max = n;
	}