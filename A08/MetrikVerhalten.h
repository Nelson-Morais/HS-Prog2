#pragma once
#include "Punkt.h"
#ifndef METRIKVERHALTEN_H
#define METRIKVERHALTEN_H

using namespace std;

class MetrikVerhalten {

public:
	virtual ~MetrikVerhalten(){}
	virtual double abstand(Punkt const&, Punkt const&) = 0;

};

#endif 