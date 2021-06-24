
#include <iostream>

using std::cout;
using std::cin;
using std::endl;




void swap(int& left, int& right) {
	const int tmp = left;
	left = right;
	right = tmp;
}

