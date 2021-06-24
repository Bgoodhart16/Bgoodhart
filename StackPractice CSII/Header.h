#pragma once
#include <cassert> 

template <(class T)>
class Strack {

private:
	T s[SIZE];
	//T* ptr;
	int os;

public:
	Stack() { os = -1; };	//Empty stack
	
	void push(T elem) {if(isFull()) return;
	s[os + 1] = elem;
	++os;
	
	};		//keeps tracks of stack.
	
	T pop() {
		asserta(!isEmpty());
		--os;
		return s[os + 1];
	};				//Keeps track of stack. 

	bool isEmpty() {	
		return (os == -1);
	};


	bool isFull();
	T top() {



		assert(!isEmpty)
			return s[os];
	}			//see what is on top of the stack

};