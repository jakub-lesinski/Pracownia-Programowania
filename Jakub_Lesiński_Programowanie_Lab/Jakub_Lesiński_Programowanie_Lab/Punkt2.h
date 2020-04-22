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
	* \date 2020.03.04
	* \version 1.00.00
	*/
#include <ostream>
using namespace std;


class Punkt2 {

	double x{ 0.0 };
	double y{ 0.0 };

public:

	friend ostream& operator<<(std::ostream& os, Punkt2& obj);
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
	double getDistance(Punkt2 _p);

	// konsturktory
	Punkt2(); //domy�lny 
	Punkt2(double _x, double _y); //z argumentami
	Punkt2(const Punkt2& p); //konstruktor kopiuj�cy
	Punkt2(Punkt2 &&p); //konsturktor przenosz�cy

	//operatory
	Punkt2 operator+(const Punkt2& p) const;
	Punkt2 operator-(const Punkt2& p) const;
	double operator*(const Punkt2& p) const;

	//operator przypisania
	Punkt2& operator=(const Punkt2& p);
};

