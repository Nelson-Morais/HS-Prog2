#pragma once
#include "MetrikVerhalten.h"
#include <string>
#ifndef GEOOBJEKT_H
#define GEOOBJEKT_H

using namespace std;

class GeoObjekt {

protected:
	MetrikVerhalten *metrik;

public:
	virtual ~GeoObjekt(){}
	virtual double inhalt() = 0;
	virtual string toString() = 0;
	virtual GeoObjekt* clone() const = 0;
	virtual GeoObjekt& assign(const GeoObjekt& rhs) = 0;
	virtual GeoObjekt& operator=(const GeoObjekt& rhs) = 0;

	

};

#endif 