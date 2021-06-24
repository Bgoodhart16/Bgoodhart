#pragma once

#include <iostream> 


class point {
private:
	double x, y;

public:
	point(); //default constructor.
	point(double nx, double ny);

	void init(double, double);

	void setx(double);
	void sety(double);

	double getx() { return x; };
	double gety() { return y; };

	void printXY();
	
	point operator+ (point p);

	point operator* (point p);	//mult operator

	void print();

	std::ostream& operator<<(std::ostream&, point p);	//outputting an entire class. overloading << operator.

	double dist(point new_p);
	double dist();										// This is an example of assignment overloading. 
	double dist(point p1, point p2);					// This is an example of assignment overloading. 
	double dist(point p1, double nx, double ny);			// This is an example of assignment overloading. 
	double dist(double nx, double ny, point p1);			// This is an example of assignment overloading. 
}; 