//Supposed to demonstrate call-by-value and call-by-variable
// 09-24-19
//Benjamin Goodhart


#include <iostream>
using std::cout; using std::endl; using std::cin;

// one is call-by-value, two is call-by-reference 
void doStuff(int one, int& two);

int main() {

	int n1 = 1, n2 = 2;

	cout << "n1 before function call = " << n1 << endl;
	cout << "n2 before function call = " << n2 << endl;

	doStuff(n1, n2);

	cout << "n1 after function call = " << n1 << endl;
	cout << "n2 after function call = " << n2 << endl;

}

void doStuff(int one, int& x) {		// It doesn't matter what the vars are that come after int&. It will always be the position 
									// of where the variable is located. For example, var x. 
	one = 111;
	cout << "one in function call = " << one << endl;

	x = 222;
	cout << "two in function call = " << x << endl;
}
