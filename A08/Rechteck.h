#pragma once
#ifndef RECHTECK_H
#define RECHTECK_H

#include "Punkt2D.h"
#include "GeoObjekt.h"
#include <string>

using namespace std;

class Rechteck : public GeoObjekt{
private:
	Punkt2D lu;
	Punkt2D ro;

public:
	Rechteck(Punkt2D,Punkt2D);
	virtual ~Rechteck(){}

	void setzePunktLu(Punkt2D const&);
	void setzePunktRo(Punkt2D const&);
	string toString();
	double inhalt();
	GeoObjekt *clone () const;
	GeoObjekt& assign(const GeoObjekt&);
	GeoObjekt& operator=(const GeoObjekt&);

};

#endif 