#ifndef POLYGON_H
#define POLYGON_H
#include "punkt2.h"
#include <initializer_list>
#include <vector>

class Polygon
{
	unsigned int count; /*!< Ilo�� wierzcho�k�w wielok�ta */
	Punkt2* vertices; /*!< Tablica wierzocho�k�w */
public:
	//zmienna statyczna zliczaj�ca liczb� obiekt�w klasy Polygon
	static unsigned int counter;
	//konstruktory -> brak domy�lnego 
	Polygon();
	Polygon(int count, Punkt2* vertices);
	Polygon(int quantity);
	Polygon(const Polygon& p);
	Polygon(initializer_list<Punkt2> list);
	//! Metoda konstruuj�ca tablic� wierzcho�k�w.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj�cy tablic� wierzcho�k�w wielok�ta
	  \param _count argument typu  unsigned int przekazuj�cy ilo�� wierzcho�k�w.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* _vertices, int _count);
	/*DOXYGEN --> SPOS�B DOKUMENTACJI WIDOCZNY PONI�EJ*/
	//! Metoda zmieniaj�ca wsp�lrz�dne i-tego wierzcho�ka.
	/*!
	  \param i argument typu int  przekazuj�cy numer wiercho�ka do zmiany
	  \param x argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej x.
	  \param y argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y);
	Punkt2 getVertex(int i);
	//! Metoda ustawiaj�ca ilo�� wierzcho�k�w.
	/*!
	  \param n argument typu int przekazuj�cy ilo�� wiercho�k�w
	  \sa setVeritces()
	*/
	void setCount(int n);
	double getPerimeter();/*!< Metoda obliczaj�ca obw�d wielok�ta */

	/*Obliczanie pola figury*/
	//Funkcja licz�ca pole tylko dla tr�jk�ta
	double countTriangleArea(Punkt2 a, Punkt2 b, Punkt2 c);
	//Funckja licz�ca pole dowolnej figury wypuk�ej
	double countTriangleArea();

	/*-----------------------------OPERATORY-----------------------------*/

	//przenosz�cy  opertor przypisania
	Polygon& operator=(Polygon&& p);

	//kopiuj�cy operator przypisania
	Polygon& operator=(const Polygon& p);

	//operator cout
	friend std::ostream& operator<<(std::ostream& os, const Polygon& obj);

	Punkt2& operator[](int i);

	~Polygon();



};
#endif // POLYGON_H