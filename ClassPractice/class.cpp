// This is practice using classes
// Benjamin Goodhart
// 10-28-2019

#include <iostream>

using std::cout; using std::cin; using std::endl;

class playerPosition {
public: 
	int posX_ = 0;
	int posY_ = 0;
	void modifyPos(int&, int&);
};

void playerPosition::modifyPos(int&, int&) {
	++posX_;
	++posY_;
}


int main() {
	cout << posY_;
}