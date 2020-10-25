#pragma once
#include "GeoObjekt.h"
#include "Punkt2D.h"
#include <string>
#ifndef KREIS_H
#define KREIS_H

using namespace std;

class Kreis: public GeoObjekt {

private:
	double radius;
	Punkt2D zentrum;

public:
	Kreis(Punkt2D, double);
	virtual ~Kreis(){}
	void setzeZentrum(Punkt2D const&);
	void setzeRadius(double);
	string toString();
	double inhalt();
	GeoObjekt* clone() const;
	GeoObjekt& assign(const GeoObjekt&);
	GeoObjekt& operator=(const GeoObjekt&);

};


#endif 