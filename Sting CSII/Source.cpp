#include "Header.h"
#include <iostream>
#include <cassert>

String::String() {
	str[0] = '\0';

}

String::String(char c) {

	str[0] = c;
	str[1] = '\0';

}

String::String(char[] c_arr) {

	int i = 0;
	while (c_arr[i] != '\0') {
		str[i] = c_arr[i];
		++i;
	}

	str[i] = '\0';			//Indicating the end of the array. 

}

int String::length() const {

	int count = 0;
	while (str[count] != '\0')
		++count;
	return count;

}

String String::substr(int start, int end) {
	//assert(start >= 0 && start < CAPACITY);
	//assert(end >= 0 && end < CAPACITY && start <= end);

	if (start < 0)
		start = 0;
	if (start > length())
		start = length() - 1;
	if (end < 0)
		end = 0;
	if (end > length())
		end = length() - 1;

	if (start > end)
		return rlt;

	int os = 0;
	
	for (int i = start; i <= end; ++i) {

		rlt.str[os] = str[i];
		++os;
	}

	rlt.str[os] = '\0';

	return rlt;

}	

