#pragma once
#ifndef PUNKT3D_H
#define PUNKT3D_H
#include "Punkt.h"
#include <string>

class Punkt3D : public Punkt {

public:
	double x;
	double y;
	double z;

	Punkt3D(double, double, double);
	virtual ~Punkt3D(){}

	string toString();
};

#endif 