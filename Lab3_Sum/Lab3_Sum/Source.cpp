//Benjamin Goodhart
//Adds negative numbers together and prints their sum.
//(9-4-2019)

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	int sum = 0;
	int n;

	cout << " Input numbers and once finished put a 0 to find the sum of the numbers. " << endl;
	cin >> n;

	while (n != 0) {
		if (n < 0)
			sum += n;
		cin >> n;
	}

	cout << " The sum is " << sum;

}