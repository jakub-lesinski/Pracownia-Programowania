/*! \file main.cpp
	*
	* \brief Kod programu testuj¹cego klasê Punkt2, Polygon
	*
	* Plik zawiera funkcjê main(),
	* w której wykonano kilka podstawowych testów
	* dotycz¹cych klasy Punkt2 oraz Polygon
	*
	* \author Jakub Lesiñski
	* \date 2020.02.24
	* \version 1.00.00
	*/

#include "Punkt2.h"
#include "Polygon.h"

int main() {
	Punkt2 w1 = Punkt2(10.0, 20.0);
	Punkt2 w2 = Punkt2(50.0, 120.0);
	Punkt2 w3 = w1 + w2;



	return 0;
}