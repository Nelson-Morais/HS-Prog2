#pragma once

#include "Quader.h"
#include <iostream>
#include "OperandenPassenNicht.h"
#include "Punkt3D.h"

using namespace std;

Quader::Quader(Punkt3D luv, Punkt3D roh) : luv(luv), roh(roh) {};

void Quader::setzePunktLuv(Punkt3D const& p) {

	this->luv = p;
}

void Quader::setzePunktRoh(Punkt3D const& p) {

	this->roh = p;
}

string Quader::toString() {
	return luv.toString() + roh.toString();
}

double Quader::inhalt() {
	
	double erg = (roh.x - luv.x)* (roh.y - luv.y)* (roh.z - luv.z);
	
	return erg;
}

GeoObjekt* Quader::clone() const{
	return new Quader(*this);
}

GeoObjekt& Quader::operator=(const GeoObjekt& rhs) {
	if (this == &rhs) return *this;
	return assign(rhs);
}

GeoObjekt& Quader::assign(const GeoObjekt& rhs) {
	const Quader* pK = dynamic_cast<const Quader*>(&rhs);
	if (!pK) {
		throw OperandenPassenNicht();
	}

	//GeoObjekt::assign(rhs);

	this->luv = pK->luv;
	this->roh = pK->roh;

	return *this;
}

