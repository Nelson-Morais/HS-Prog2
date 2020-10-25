#pragma once
#ifndef PUNKT2D_H
#define PUNKT2D_H
#include "Punkt.h"
#include <string>

using namespace std;


class Punkt2D: public Punkt {
	

public:
	double x;
	double y;
	
	Punkt2D(double,double);
	virtual ~Punkt2D(){}

	string toString();

};

#endif 