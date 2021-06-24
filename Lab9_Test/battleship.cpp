// This is where the functions are defined
// Benjamin Goodhart
// 11-1-19

#include "battleship.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;
int fleetSize = 6;

Location::Location() {
	x_ = -1;
	y_ = '*';
}

void Location::pick() {

	Location randomLocation;

	x_ = rand() % 6 + 1;
	int locationLetter = rand() % 6 + 1;
	switch (locationLetter) {
	case 1:
		y_ = 'a';
		break;
	case 2:
		y_ = 'b';
		break;
	case 3:
		y_ = 'c';
		break;
	case 4:
		y_ = 'd';
		break;
	case 5:
		y_ = 'e';
		break;
	case 6:
		y_ = 'f';
		break;
	}

}


void Location::fire() {
	Location loc;
	//cout << "Please input your guess for the number coordinate: ";
	cin >> x_;
	//cout << "Please input your guess for the letter coordinate: ";
	cin >> y_;

}

void Location::print() const {
	cout << x_;
	cout << y_;
}

bool compare(const Location& loc, const Location& userShot) {
	if (loc.x_ == userShot.x_ && loc.y_ == userShot.y_) {
		return true;
	}
	else
		return false;
}

Ship::Ship() {
	sunk_ = false;
}

bool Ship::match(const Location& userShot)
const {
	return compare(loc_, userShot);
}

//bool Ship::isSunk() const { return sunk_; }

void Ship::sink() {
	sunk_ = true;
}

void Ship::setLocation(const Location& ship) {

	loc_ = ship;			// Get a tutor to explain this
}

void Ship::printShip() const {
	loc_.print();
	
	if (sunk_ == true) {
		cout << "This ship has been sunk " << endl;
	}
	else
		cout << "This ship is still standing " << endl;

}


int Fleet::check(const Location& userShip) const {
	Ship ships;
	for (int i = 0; i < fleetSize_; ++i) {
		if (ships_[fleetSize_].match(userShip) == true) {
			return i;
		}
		return -1;
	}
}

void Fleet::deployFleet() {	
	Ship ship;
	Location newPick;
	int numOfDeployed = 0;

	while (numOfDeployed < fleetSize_) {
		newPick.pick();

		if (ships_[numOfDeployed].match(newPick) == false) {
			ships_[numOfDeployed].setLocation(newPick);
			++numOfDeployed;
		}
	}
}

bool Fleet::operational() const {
	for (int i = 0; i < fleetSize_; ++i)
		if (ships_[i].isSunk() == false)
			return true;
	return false;
}

bool Fleet::isHitNSink(const Location& userShot) {
	Ship ship;
	int numOfDeployed = 0;

	while (numOfDeployed < fleetSize_) {
		if (ship.match(userShot) == true) {
			return true;
			//cout << "Hit!" << endl;
			ship.sink();
			++numOfDeployed;
		}
		if (ship.isSunk() == false) {
			//cout << "Miss!" << endl;
			++numOfDeployed;

		}
	}
}

void Fleet::printFleet() const {
	int numOfDeployed = 0;
	Ship ship;
	while (numOfDeployed < fleetSize_) {
		ships_[numOfDeployed].printShip();
		++numOfDeployed;
	}
}