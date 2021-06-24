#include <iostream>
#include "point.h"
#include <math.h>

point::point() {		//constructor

	x = 0;
	y = 0;

}

point::point(double nx, double ny) {

	x = nx;
	y = ny;

}
void point::setx(double nx) {

	x = nx;

}

void point::sety(double ny) {
	y = ny;
}

void point::init(double nx, double ny) {
	x = nx;
	y = ny;

}

double point::dist(point new_p) {

	double distance = 0;

	distance = (x - new_p.getx()) * (x - new_p.getx()) + (y - new_p.gety()) * (y - new_p.gety());	//Finding the dist between pt.dist and the accepted new point

	distance = sqrt(distance);

	return distance;
}

void point::printXY() {

	std::cout << "(" << x << "," << y << ")" << std::endl;

}


point point::operator+ (point p) {		//The retirned value is a point. 

	point p3;

	p3.getx = x + p.x;		//This is doubleing the distance of the point. 
	p3.y = y + p.y;
}


point point::operator* (double coef) {			//should work

	point p;
	p.x = x * coef;			
	p.y = y * coef;			// assigning new x and y to p.
	return p;
}

std::ostream& operator<<(std::ostream&, point p) {

	out << "(" << p.getx() << " , " << p.gety() << ")" << std::endl;
 
	return out;
}

int main() {

	point pt;	//constructor is called now
	point pt2 (2, 3);

	pt.printXY(); 
	pt2.printXY();

	
	std::cout << pt.dist(pt2);

	std::cout << (pt + pt2).getx() << std::endl;
	std::cout << (pt2 * 4).getx() << (pt2 * 4).gety() << std::endl; // should mult the point of the pt2 class by four and output the result. 

	std::cout << pt << std::endl;			//Using overloaded operator to output the objects. 
	std::cout << pt2 << std::endl;			//Using overloaded operator to output the objects. 


}