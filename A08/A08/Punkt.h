#pragma once
#ifndef PUNKT_H
#define PUNKT_H
#include <string>

using namespace std;

class Punkt {

public:
	
	virtual ~Punkt(){}
	virtual string toString()=0;
};

#endif 