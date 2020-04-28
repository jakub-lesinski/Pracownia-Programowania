#pragma once
#include "polygon.h"
#include <initializer_list>
#include <iostream>
#include <ostream>
using namespace std;

class MapPolygon : public Polygon {
	int borderWith;
	int borderColor;
	int fillColor;
	int opacity;

public:
	MapPolygon();
	MapPolygon(Punkt2* _vertices, int _count, int _borderwith,int  _borderColor, int _fillColor, int _opacity);


	//setter
	void setBorderWidth(int s);
	void setBorderColor(int r, int g, int b, int a);
	void setfillColor(int r, int g, int b, int a);
	void setOpacity(int o);

	//gettery
	int getBorderWith();
	int getBorderColor(int r, int g, int b, int a);
	int getfillColor(int r, int g, int b, int a);
	int getOpacity();


	//destruktor
	~MapPolygon();
};

