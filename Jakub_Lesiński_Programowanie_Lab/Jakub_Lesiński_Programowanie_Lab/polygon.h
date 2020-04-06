#ifndef POLYGON_H
#define POLYGON_H
#include "punkt2.h"
#include <initializer_list>
#include <vector>

class Polygon
{
	unsigned int count; /*!< Iloœæ wierzcho³ków wielok¹ta */
	Punkt2* vertices; /*!< Tablica wierzocho³ków */
public:
	//zmienna statyczna zliczaj¹ca liczbê obiektów klasy Polygon
	static unsigned int counter;
	//konstruktory -> brak domyœlnego 
	Polygon();
	Polygon(int count, Punkt2* vertices);
	Polygon(int quantity);
	Polygon(const Polygon& p);
	Polygon(initializer_list<Punkt2> list);
	//! Metoda konstruuj¹ca tablicê wierzcho³ków.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj¹cy tablicê wierzcho³ków wielok¹ta
	  \param _count argument typu  unsigned int przekazuj¹cy iloœæ wierzcho³ków.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* _vertices, int _count);
	/*DOXYGEN --> SPOSÓB DOKUMENTACJI WIDOCZNY PONI¯EJ*/
	//! Metoda zmieniaj¹ca wspólrzêdne i-tego wierzcho³ka.
	/*!
	  \param i argument typu int  przekazuj¹cy numer wiercho³ka do zmiany
	  \param x argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej x.
	  \param y argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y);
	Punkt2 getVertex(int i);
	//! Metoda ustawiaj¹ca iloœæ wierzcho³ków.
	/*!
	  \param n argument typu int przekazuj¹cy iloœæ wiercho³ków
	  \sa setVeritces()
	*/
	void setCount(int n);
	double getPerimeter();/*!< Metoda obliczaj¹ca obwód wielok¹ta */

	/*Obliczanie pola figury*/
	//Funkcja licz¹ca pole tylko dla trójk¹ta
	double countTriangleArea(Punkt2 a, Punkt2 b, Punkt2 c);
	//Funckja licz¹ca pole dowolnej figury wypuk³ej
	double countTriangleArea();

	/*-----------------------------OPERATORY-----------------------------*/

	//przenosz¹cy  opertor przypisania
	Polygon& operator=(Polygon&& p);

	//kopiuj¹cy operator przypisania
	Polygon& operator=(const Polygon& p);

	//operator cout
	friend std::ostream& operator<<(std::ostream& os, const Polygon& obj);

	Punkt2& operator[](int i);

	~Polygon();



};
#endif // POLYGON_H