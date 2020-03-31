#pragma once

/*! \file Polygon.h
	*
	* \brief Zawiera deklaracjê klasy Polygon
	*
	* Plik zawiera deklaracjê klasy Polygon.h
	*Zapisuje iloœæ wierzcho³ków,
	*
	* \author Jakub Lesiñski
	* \date 2020.03.04
	* \version 1.00.00
	*/

#include "Punkt2.h"
#include <time.h>
#include <cstdlib>
#include "Punkt2.cpp"
#include <initializer_list>
class Polygon
{
	unsigned int count; /*!< Iloœæ wierzcho³ków wielok¹ta */

	Punkt2* vertices; /*!< Tablica wierzocho³ków */

public:

	friend ostream& operator<<(std::ostream& os, const Polygon& obj);
	//! Metoda konstruuj¹ca tablicê wierzcho³ków.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj¹cy tablicê wierzcho³ków wielok¹ta
	  \param _count argument typu  unsigned int przekazuj¹cy iloœæ wierzcho³ków.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* vertices, int count) {
		for (int i = 0; i < count; i++) {
			vertices[i].setX(rand());
			vertices[i].setY(rand());
		}

	}

	Punkt2 getVertex(int i);

	Punkt2 &operator[](int i);

	// konstruktorki
	Polygon(int count, Punkt2* vertices);
	Polygon(int quantity);
	Polygon(const Polygon& p);
	Polygon(initializer_list<Punkt2>);
	

	//! Metoda zmieniaj¹ca wspólrzêdne i-tego wierzcho³ka.
	/*!
	  \param i argument typu int  przekazuj¹cy numer wiercho³ka do zmiany
	  \param x argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej x.
	  \param y argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y) {
		vertices[i].setX(x);
		vertices[i].setY(y);
	}

	//! Metoda ustawiaj¹ca iloœæ wierzcho³ków.
	/*!
	  \param n argument typu int przekazuj¹cy iloœæ wiercho³ków
	  \sa setVeritces()
	*/
	void setCount(int n) {
		count = n;
	}


	double getPerimeter() { /*!< Metoda obliczaj¹ca obwód wielok¹ta */


	}

	double getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) {
		double a = p1.getDistance(p2);
		double b = p2.getDistance(p3);
		double c = p3.getDistance(p1);
		double p = (a + b + c) / 2;
		return sqrt((p - a) * (p - b) * (p - c));
	}
};
