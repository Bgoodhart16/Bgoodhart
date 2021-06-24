// This program asks the user for a string with a length of 75 and justifies it.
// Benjamin Goodhart
// 10-17-19

#include <iostream>
#include <string>
#include <cstddef>

using std::cout; using std::cin; using std::endl;
using std::string;


int main() {

	string s;
	getline(cin,s);
	cout << s << endl;
	cout << s.size() << endl;
	int size = s.size();


	int insertPoint = 0;
	do {
		insertPoint = s.find_first_of(".,?!;", insertPoint);
		s.insert(insertPoint + 1, " ");
		++insertPoint;

	} while (s.find_first_of(".,?!;",insertPoint) != string::npos);

	cout << s;

	int pos = 0;

	while (s.length() < 75) {
		pos = s.find_first_of(" ");
		if (rand() && pos != -1)
			s.insert(pos + 1, " ");
		if (pos == -1)
			pos = 0;
	
	}
	cout << s.size() << endl;
}