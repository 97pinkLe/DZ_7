#include "circle.h"

circle::circle() {
	radius = 0;
}

circle::~circle() {

}

void circle::setRadius(double rad) {
	this->radius = rad;
}

double circle::getRadius() {
	int rad = this->radius;
	return rad;
}
double circle::getArea() {
	return pi * pow(radius, 2);
}

double circle::getLength() {
	return 2 * pi * this->radius;
}