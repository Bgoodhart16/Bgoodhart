//Benjamin GOodhart

#include "HEADER.H"

bool isValid(int a) {

	if (a >= 0 && a < DOMAIN)				//This is checking if a is valid. making sure it's in the array domain. 
		return true;
	return false;

}

set::set() {

	for (int i = 0; i < DOMAIN; ++i)
		s[i] = false;
}

set::set(int a) : set() {					//Having the : set() lets you intialize everything the way you want it first. runs that contructor first. 

	if (isValid(a))
		s[a] = true;
	
}

set::set(int a, int b) : set() {					//Having the : set() lets you intialize everything the way you want it first. runs that contructor first. 

	//for (int i = 0; i < DOMAIN; ++i)
		//s[i] = false;
	if (isValid(a))
		s[a] = true;

	if (isValid(b))
		s[b] = true;

}

int set::set::size() {

	int cnt = 0;
	for (int i = 0; i < DOMAIN; ++i)
		if (s[i])
			++cnt;

}


set set::operator* (const set& set2) {

	set rlt;
	for (int i = 0; i < DOMAIN; ++i) {
		if (s[i] && set2.s[i])
			rlt.s[i] = true;
	}
	return rlt;
}

set set::operator+ (const set& set2) {

	set rlt;
	for (int i = 0; i < DOMAIN; ++i) {
		if (s[i] || set2.s[i])
			rlt.s[i] = true;
	}
	return rlt;
}

set set::operator- (const set& set2) {			//set difference

	set rlt;
	for (int i = 0; i < DOMAIN; ++i) {
		if (s[i] && (!set2.s[i]))
			rlt.s[i] = true;
	}
	return rlt;
}

bool set::operator[] (int index) {



}

bool set::operator== (const set& set2) {

	for (int i = 0; i < DOMAIN; ++i) {

		if (s[i] != set2.size[i])
			return false;
	}

} 

bool set::operator<= (const set& set2) {
	
	for (int i = 0; i < DOMAIN; ++i) {

		if (s[i] && set2.size[i])
			continue;
		else
			return false;
	}
	return true;
}

set operator+ (int elem, set& set2) {

	return set(elem) + set2;

}

std::ostream& operator<< (std::ostream& out, set& set2) {

	bool printComma = false;
	out << "{";
	for (int i = 0; i < DOMAIN; ++i) {

		if (set2.s[i])
			out << i;
		if (printComma){
			out << ", ";
		printComma = true;
	}
	}
}