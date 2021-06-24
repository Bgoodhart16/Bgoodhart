// Practice for the final
// Benjamin Goodhart
// 12/10/2019
// Final is tomorrow.

#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::vector;

int main() {


	// Structures
	struct Date {
		int day;
		int month;
		int year;
		void myFunc(int, int, int);
		int a[];
	};
	// Can also have an array in your structure. 

	Date myFunc(int d, int m, int y) {
		Date tmp;
		tmp.day = d;
		tmp.month = m;
		tmp.year = y;
		return tmp;
	}

	// Classes

	class bruh {
	private:
		int day;
		int month;
		int year;
		int getDay(return day);

	};

	// Pointers 

	int* p;
	int a[55];
	p = a;



	// Dynamic memory
	int size;
	int* p = new int[size];
	p[1] = 0;


	// Vectors
}