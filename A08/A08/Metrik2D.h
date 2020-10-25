#pragma once
#include "MetrikVerhalten.h"
#include "Punkt.h"
#ifndef METRIK2D_H
#define METRIK2D_H

using namespace std;

class Metrik2D: public MetrikVerhalten {

public:
	Metrik2D();
	virtual ~Metrik2D(){}
	virtual double abstand(Punkt const&, Punkt const&) =0;

};


#endif 
