#pragma once

#include <iostream>

const int DOMAIN = 1000;

class set {
private:
	bool s[DOMAIN];			//boolean array

public:
	set();
	set(int);
	set(int, int);			//constructors
	set(int, int, int);

	int size() const;		//returns # of elements in the set

	friend std::ostream& operator<< (std::ostream& out, set& set2);

	set operator* (const set& set2);		//set intersection (const so it doesn't change the attributes of set2)
	set operator+ (const set& set2);		//set union
	set operator- (const set& set2);		//set difference

	bool operator[] (int index);			//Seeing if int is in the array or not. 

	bool operator== (const set& set2);		//compare if sets are indentical
	bool operator<= (const set& set2);		//compare if set 1 is subset of set2. 
	bool operator != (const set& set2);		//If two sets are not equal to eachother. 
};

std::ostream& operator<< (std::ostream& out, set& set2);			//Overloading the output operator for set2
std::istream& operator>> (std::istream& in, set& set2);				//Overlaoding input operator. 

set operator+ (int elem, set& set2);								//
set operator* (int elem, set& set2);								//
set operator- (int elem, set& set2);								//