// Defines functions for the game
//Benjamin Goodhart
// 10-25-19

#include <iostream>
#include <time.h>
#include "battleship.h"


using std::cout; using std::cin; using std::endl;

Location pick() {


	Location randomLocation;

	randomLocation.x = rand() % 6 + 1;
	int locationLetter = rand() % 6 + 1;
	switch (locationLetter) {
	case 1:
		randomLocation.y = 'a';
		break;
	case 2:
		randomLocation.y = 'b';
		break;
	case 3:
		randomLocation.y = 'c';
		break;
	case 4:
		randomLocation.y = 'd';
		break;
	case 5:
		randomLocation.y = 'e';
		break;
	case 6:
		randomLocation.y = 'f';
		break;

	}

	return randomLocation;
}


void initialize(Ship ships[]) { // This is an arrray of ships with data type Ship
	for (int i = 0; i < fleetSize; ++i) {
		ships[i].loc.x = -1;
		ships[i].loc.y = '*';
	}
}

bool match(const Ship& ship, const Location& location) {
	if (ship.loc.x == location.x && ship.loc.y == location.y) {
		return true;
	}
	else
		return false;
}

int check(const Ship ships[], const Location& location) {
	for (int i = 0; i < fleetSize; ++i) {
		if (match(ships[i], location) == true) {
			return i;
		}
	}
	return -1;
}

void deploy(Ship ships[]) {
	int numOfDeployed = 0;

	while (numOfDeployed < fleetSize) {
		Location newPick = pick();

		if (check(ships, newPick) == -1) {
			ships[numOfDeployed].loc.x = newPick.x;
			ships[numOfDeployed].loc.y = newPick.y;
			++numOfDeployed;
		}
	}
}

void printShip(const Ship& ships) {
	if (ships.sunk == true) {
		cout << "Ship is: " << ships.sunk << endl;
		cout << "Location is: " << ships.loc.x << ", " << ships.loc.y << endl;
	}
	else {
		cout << "There is a ship still standing " << endl;
		cout << "Location is: " << ships.loc.x << ", " << ships.loc.y << endl;
	}
}

void printFleet(const Ship ships[]) {
	int i = 0;
	while (i < fleetSize) {
		printShip(ships[i]);
		++i;
	}
}


bool operational(const Ship ships[]) {
	for (int i = 0; i < fleetSize; ++i)
		if (ships[i].sunk == false)
			return true;
	return false;
}


Location fire() {
	Location loc;
	cout << "Please input your guess for the number coordinate: ";
	cin >> loc.x;
	cout << "Please input your guess for the letter coordinate: ";
	cin >> loc.y;
	return loc;
}

void sink(Ship& ship) {
	ship.sunk = true;
}