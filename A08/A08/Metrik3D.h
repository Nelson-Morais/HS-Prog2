#pragma once
#include "MetrikVerhalten.h"
#include "Punkt.h"
#ifndef METRIK3D_H
#define METRIK3D_H

using namespace std;

class Metrik3D : public MetrikVerhalten {

public:
	Metrik3D();
	virtual ~Metrik3D(){}

	virtual double abstand(Punkt const&, Punkt const&);
};

#endif 