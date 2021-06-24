#ifndef HEADER_H
#define HEADER_H
#include <iostream>

class String {
	int CAPACITY = 10000;

private:
	char str{ CAPACITY };

public:
	String();		//Constructor.
	String(const char c);
	String(char[]);			//To get it to stop reading the string use a case to read until '\0'

	int capacity() { return CAPACITY - 1; };
	int length();

	String substr(int start, int end);
	int findChar(int, char);

	char operator[](int index);		//Overloading the [] operator to return the # at pos index.
	String & operator+= (String str2);
	String & operator+ (String str2);

	bool operator== (String str2) const;

	bool operator> (String str2) const;
	bool operator>= (String str2) const;

	bool operator< (String str2) const	;
	bool operator<= (String str2) const;

	istream& opeartor>> (istream& in, String s);
	ostream& operator<< (ostream& out, String s);

	String& operator+ (char c, String& s);
	String& operator+ (char[] c, String& s);

	//Need to looks at all the string and bigint comparison operators. 

//bool operator



};
#endif HEADER_H