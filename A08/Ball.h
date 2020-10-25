#pragma once
#ifndef BALL_H
#define BALL_H
#include <string>
#include "GeoObjekt.h"
#include "Punkt3D.h"

using namespace std;

class Ball: public GeoObjekt {
private:
	double radius;
	Punkt3D zentrum;

public:
	Ball(Punkt3D, double);
	virtual ~Ball(){}
	void setzeZentrum(Punkt3D const&);
	void setzeRadius(double);
	string toString();
	double inhalt();
	GeoObjekt* clone() const;
	GeoObjekt& assign(const GeoObjekt& rhs);
	GeoObjekt& operator=(const GeoObjekt& rhs);

};

#endif 