#pragma once

/*! \file Polygon.h
	*
	* \brief Zawiera deklaracj� klasy Polygon
	*
	* Plik zawiera deklaracj� klasy Polygon.h
	*Zapisuje ilo�� wierzcho�k�w,
	*
	* \author Jakub Lesi�ski
	* \date 2020.02.24
	* \version 1.00.00
	*/

#include "Punkt2.h"
#include <time.h>
#include <cstdlib>
#include "Punkt2.cpp"
class Polygon
{
	unsigned int count; /*!< Ilo�� wierzcho�k�w wielok�ta */

	Punkt2* vertices; /*!< Tablica wierzocho�k�w */

public:

	//! Metoda konstruuj�ca tablic� wierzcho�k�w.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj�cy tablic� wierzcho�k�w wielok�ta
	  \param _count argument typu  unsigned int przekazuj�cy ilo�� wierzcho�k�w.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* vertices, int count) {
		for (int i = 0; i < count; i++) {
			vertices[i].setX(rand());
			vertices[i].setY(rand());
		}

	}


	//! Metoda zmieniaj�ca wsp�lrz�dne i-tego wierzcho�ka.
	/*!
	  \param i argument typu int  przekazuj�cy numer wiercho�ka do zmiany
	  \param x argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej x.
	  \param y argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y) {
		vertices[i].setX(x);
		vertices[i].setY(y);
	}

	//! Metoda ustawiaj�ca ilo�� wierzcho�k�w.
	/*!
	  \param n argument typu int przekazuj�cy ilo�� wiercho�k�w
	  \sa setVeritces()
	*/
	void setCount(int n) {
		count = n;
	}


	double getPerimeter() { /*!< Metoda obliczaj�ca obw�d wielok�ta */


	}

	double getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) {
		double a = Punkt2::getDistance(p1, p2)
	}
};
