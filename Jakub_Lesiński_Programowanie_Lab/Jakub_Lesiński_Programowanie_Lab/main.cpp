#include <iostream>
#include "punkt2.h"
#include "Polygon.h"
using namespace std;

int main() {
	Punkt2* punkty = new Punkt2[2];
	punkty[0] = Punkt2();
	punkty[1] = Punkt2();
	Polygon p = Polygon(2, punkty);

	return 0;
}