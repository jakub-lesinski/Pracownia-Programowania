#pragma once

/*! \file Punkt2.h
	*
	* \brief Zawiera deklaracj� klasy Punkt2
	*
	* Plik zawiera deklaracj� klasy Punkt2.h.
	* Wsp�rz�dne punktu s� podawane w uk�adzie kartezja�skim.
	* Klasa zawiera kilka metod skladowych
	*
	* \author Jakub Lesi�ski
	* \date 2020.02.17
	* \version 1.00.00
	*/

class Punkt2 {

	double x{ 0.0 };
	double y{ 0.0 };

public:
	//settery
	void setX(double _x);
	void setY(double _y);

	//gettery
	double getX();
	double getY();

	//wsp�rz�dne biegunowe
	double getRadius();
	double getAngle();

	//odleg�o�� punktu od punktu _p
	double getDistance(Punkt2 _p, Punkt2 _d) {
		for (int i = 0; i < count - 1; i++) {
			result += getDistance(vertices[i], vertices[i + 1]);
		}
		result += getDistance(vertices[count], vertices[0]);
	}

};

