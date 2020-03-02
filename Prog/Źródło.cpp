/*! \file main.cpp
	*
	* \brief Kod programu testuj�cego klas� Punkt2, Polygon
	*
	* Plik zawiera funkcj� main(),
	* w kt�rej wykonano kilka podstawowych test�w
	* dotycz�cych klasy Punkt2 oraz Polygon
	*
	* \author Jakub Lesi�ski
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