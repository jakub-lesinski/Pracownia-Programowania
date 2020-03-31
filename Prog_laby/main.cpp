/*! \file main.cpp
	*
	* \brief Kod programu testującego klasę Punkt2, Polygon
	*
	* Plik zawiera funkcję main(),
	* w której wykonano kilka podstawowych testów
	* dotyczących klasy Punkt2 oraz Polygon
	*
	* \author Jakub Lesiński
	* \date 2020.02.24
	* \version 1.00.00
	*/

#include <iostream>
#include "Punkt2.h"
#include "Polygon.h"
#include <initializer_list>
using namespace std;

int main() {
	Punkt2 w1 = Punkt2(10.0, 20.0);
	Punkt2 w2 = Punkt2(50.0, 120.0);
	Punkt2 w3 = w1 + w2;
	cout << w1.getX() << w2.getX() << w3.getY() << endl;

	initializer_list<Punkt2> Punktlist = { {13.0, 2.0}, {3.0,5.0}, {2.4,4.4}, {3.4,6.8} };
	Polygon jakis = Polygon(Punktlist);

	Punkt2 p1{ 10.0, 30.0 };
	Punkt2 p2{ 100.0, 300. };
	p1 = p2;

	Punkt2 o1 = p1;
	Punkt2 o3 = o1;

	Polygon kwadrat = Polygon(Punktlist);

	Punkt2 w1 = kwadrat.getVertex(2);
	Punkt2 w1 = kwadrat[2];

	
	return 0;
}