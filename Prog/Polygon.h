#pragma once

/*! \file Polygon.h
	*
	* \brief Zawiera deklaracjê klasy Polygon
	*
	* Plik zawiera deklaracjê klasy Polygon.h
	*Zapisuje iloœæ wierzcho³ków,
	*
	* \author Jakub Lesiñski
	* \date 2020.02.24
	* \version 1.00.00
	*/

#include "Punkt2.h"
#include <time.h>
#include <cstdlib>
#include "Punkt2.cpp"
class Polygon
{
	unsigned int count; /*!< Iloœæ wierzcho³ków wielok¹ta */

	Punkt2* vertices; /*!< Tablica wierzocho³ków */

public:

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
		double a = Punkt2::getDistance(p1, p2)
	}
};
