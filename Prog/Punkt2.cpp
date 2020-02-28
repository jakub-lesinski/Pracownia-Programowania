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

#include "Punkt2.h"
#include <cmath>
#include <math.h>

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

double Punkt2::getDistance(Punkt2 p, Punkt2 d) {
	return sqrt(pow(p.getX() - d.getX(), 2) + pow(p.getY() - d.getY(), 2));
}

double Punkt2::getRadius() {
	return pow(x, 2) + pow(y, 2);
}

double Punkt2::getAngle() {
	return atan2(x, y);
}