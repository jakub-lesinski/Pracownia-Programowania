/*! \file Punkt2.h
    *
    * \brief Zawiera definicjê klasy Polygon
    *
    * Plik zawiera implementacjê metod klasy Polygo.
    *
    * \author Jakub Lesiñski
    * \date 2020.03.04
    * \version 1.00.00
    */

#include "polygon.h"
#include "punkt2.h"
#include <iostream>
#include <cmath>
using namespace std;

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
    /* getDistance() --> zrobiæ ¿eby dzia³a³o
    for(int i = 0 ; i < count - 1 ; i++){
        result += getDistance(vertices[i],vertices[i+1]);
    }
    result += getDistance(vertices[count],vertices[0]);
    */
    return result;
}