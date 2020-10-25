#pragma once
#ifndef QUADER_H
#define QUADER_H
#include "GeoObjekt.h"
#include <string>
#include "Punkt3D.h"

class Quader : public GeoObjekt {
private:
	Punkt3D luv;
	Punkt3D roh;

public:
	Quader(Punkt3D, Punkt3D);
	virtual ~Quader(){}

	void setzePunktLuv(Punkt3D const& p);
	void setzePunktRoh(Punkt3D const& p);
	string toString();
	double inhalt();
	GeoObjekt* clone() const;
	GeoObjekt& assign(const GeoObjekt&);
	GeoObjekt& operator=(const GeoObjekt&);

};

#endif 