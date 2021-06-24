// reads 5 numbers and prints them out
// demonstates passing array to a function
// Mikhail Nesterenko
// 02/24/99

#include <iostream>
using std::cout; using std::endl; using std::cin;

// initializes the array by user input
void fillUp(int[], int size);

int main() {
	const int arraySize = 5;
	int a[arraySize];

	fillUp(a, arraySize);

	cout << "Echoing array:\n";
	for (int i = 0; i < arraySize; ++i)
		cout << a[i] << endl;
}

// fills upt the array "a" of "size"
void fillUp(int a[], int size) {

	cout << "Enter " << size << " numbers:\n";
	for (int i = 0; i < size; ++i)
		cin >> a[i];
}
