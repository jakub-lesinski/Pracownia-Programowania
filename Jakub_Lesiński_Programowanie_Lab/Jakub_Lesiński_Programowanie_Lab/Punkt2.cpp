/*! \file Punkt2.cpp
	*
	* \brief Zawiera definicjê klasy Punkt2
	*
	* Plik zawiera implementacjê metod klasy Punkt2.
	*
	* \author Jakub Lesiñski
	* \date 2020.02.17
	* \version 1.00.00
	*/

#include "punkt2.h"
#include <cmath>
#include <math.h>
#include <ostream>

using namespace std;

ostream& operator<<(std::ostream& os, Punkt2& obj) {
	// zapisz obj do strumienia

	os << "( " << obj.getX() << ", " << obj.getY() << " )";

	return os;
}

Punkt2& Punkt2::operator=(const Punkt2& p) {
	if (&p != this) {
		x = p.x;
		y = p.y;
	}

	return *this;
}


Punkt2::Punkt2() {
	x = 0.0;
	y = 0.0;
}

Punkt2::Punkt2(double _x, double _y) {
	x = _x;
	y = _y;
}

Punkt2::Punkt2(const Punkt2& p) {
	x = p.x;
	y = p.y;
}

void Punkt2::setX(double _x)
{
	x = _x;
}

void Punkt2::setY(double _y) {
	y = _y;
}

double Punkt2::getX()
{
	return x;
}

double Punkt2::getY() {
	return y;
}

double Punkt2::getDistance(Punkt2 p) {
	return sqrt(pow(p.getX() - x, 2) + pow(p.getY() - y, 2));
}

double Punkt2::getRadius() {
	return pow(x, 2) + pow(y, 2);
}

double Punkt2::getAngle() {
	return atan2(x, y);
}