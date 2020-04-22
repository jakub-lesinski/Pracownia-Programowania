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

	//wspó³rzêdne biegunowe
	double getRadius();
	double getAngle();

	//odleg³oœæ punktu od punktu _p
	double getDistance(Punkt2 _p);

	// konsturktory
	Punkt2(); //domyœlny 
	Punkt2(double _x, double _y); //z argumentami
	Punkt2(const Punkt2& p); //konstruktor kopiuj¹cy
	Punkt2(Punkt2 &&p); //konsturktor przenosz¹cy

	//operatory
	Punkt2 operator+(const Punkt2& p) const;
	Punkt2 operator-(const Punkt2& p) const;
	double operator*(const Punkt2& p) const;

	//operator przypisania
	Punkt2& operator=(const Punkt2& p);
};

