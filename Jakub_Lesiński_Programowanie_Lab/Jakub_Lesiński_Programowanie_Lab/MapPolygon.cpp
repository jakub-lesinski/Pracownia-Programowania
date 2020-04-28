#include "MapPolygon.h"
#include "polygon.h"
#include <iostream>
#include <ostream>

using namespace std;

MapPolygon::MapPolygon() : Polygon() {
	borderWith = 1;
	borderColor = (243,243,243,255);
	fillColor = (255,255,255,255);
	opacity = 255;
}

MapPolygon::MapPolygon(Punkt2* _vertices, int _count, int _borderWith, int  _borderColor, int _fillColor, int _opacity) : Polygon(_count, _vertices) {
	borderWith = _borderWith;
	borderColor = _borderColor;
	fillColor = _fillColor;
	opacity = _opacity;
}