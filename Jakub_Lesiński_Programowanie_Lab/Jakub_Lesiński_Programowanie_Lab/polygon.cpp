#include "polygon.h"
#include "punkt2.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <initializer_list>
#include <vector>
using namespace std;


Polygon::Polygon() {
	count = 3;
	vertices = new Punkt2[count];
	vertices[0] = Punkt2(1.0, 0.0);
	vertices[1] = Punkt2(2.0, 0.0);
	vertices[2] = Punkt2(2.0, 1.0);
}

Polygon::Polygon(int _count, Punkt2* _vertices) {
	count = _count;
	vertices = new Punkt2[count];
	for (int i = 0; i < count; i++) {
		vertices[i] = _vertices[i];
	}
}

Polygon::Polygon(int quantity) {
	vertices = new Punkt2[quantity];
	count = quantity;
	for (int i = 0; i < quantity; i++) {
		vertices[i].setX(rand());
		vertices[i].setY(rand());
	}
}


Polygon::Polygon(const Polygon& p) {
	count = p.count;
	vertices = new Punkt2[count];
	for (int i = 0; i < p.count; i++) {
		vertices[i] = p.vertices[i];
	}
}

//Konstruktor z initializer_list

Polygon::Polygon(initializer_list<Punkt2> list) {
	count = list.size();
	vertices = new Punkt2[count];
	int i = 0;
	for (auto obj : list) {
		vertices[i] = obj;
		i++;
	}
}

/*Operator cout<<*/
ostream& operator<<(ostream& os, const Polygon& obj) {
	os << endl;
	for (int i = 0; i < obj.count; i++) {
		os << " " << i << ": " << obj.vertices[i] << endl;
	}
	return os;
}


void Polygon::setVertices(Punkt2* _vertices, int _count) {
	vertices = _vertices;
	count = _count;
}

void Polygon::changeVertex(int i, double x, double y) {
	vertices[i].setX(x);
	vertices[i].setY(y);
}

double Polygon::getPerimeter() {
	double result = 0;
	for (int i = 0; i < count - 1; i++) {
		result += sqrt(pow(vertices[i].getX() - vertices[i + 1].getX(), 2) + pow(vertices[i].getY() - vertices[i + 1].getY(), 2));
	}
	result += sqrt(pow(vertices[count].getX() - vertices[0].getX(), 2) + pow(vertices[count].getY() - vertices[0].getY(), 2));
	return result;
}

Punkt2 Polygon::getVertex(int i) {
	return vertices[i];
}

double Polygon::countTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) {
	double a = p1.getDistance(p2);
	double b = p2.getDistance(p3);
	double c = p3.getDistance(p1);
	double p = (a + b + c) / 2;
	return sqrt((p - a) * (p - b) * (p - c));
}


double Polygon::countTriangleArea() {
	double result = 0;
	for (int i = 2; i < count; i += 2) {
		result += countTriangleArea(vertices[0], vertices[i], vertices[i - 1]);
	}
	return result;
}

/*-----------------------------OPERATORY-----------------------------*/

//przenosz¹cy  opertor przypisania
Polygon& Polygon::operator=(Polygon&& p) {
	if (&p != this) {
		delete[] vertices;
		vertices = p.vertices;
		count = p.count;
		p.count = 0;
		p.vertices = nullptr;
	}
	return *this;
}

//kopiuj¹cy operator przypisania
Polygon& Polygon::operator=(const Polygon& obj) {
	if (&obj != this) {
		delete[] vertices;
		vertices = new Punkt2[obj.count];
		count = obj.count;
		for (int i = 0; i < count; i++) {
			vertices[i] = obj.vertices[i];
		}
	}
	return *this;
}


Punkt2& Polygon::operator[](int i) {
	return vertices[i];
}



Polygon::~Polygon() {
	if (vertices) {
		delete[] vertices;
	}
}