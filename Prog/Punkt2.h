#pragma once

/*! \file Punkt2.h
	*
	* \brief Zawiera deklaracjê klasy Punkt2
	*
	* Plik zawiera deklaracjê klasy Punkt2.h.
	* Wspó³rzêdne punktu s¹ podawane w uk³adzie kartezjañskim.
	* Klasa zawiera kilka metod skladowych
	*
	* \author Jakub Lesiñski
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

	//wspó³rzêdne biegunowe
	double getRadius();
	double getAngle();

	//odleg³oœæ punktu od punktu _p
	double getDistance(Punkt2 _p, Punkt2 _d) {
		for (int i = 0; i < count - 1; i++) {
			result += getDistance(vertices[i], vertices[i + 1]);
		}
		result += getDistance(vertices[count], vertices[0]);
	}

};

