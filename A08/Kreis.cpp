#define _USE_MATH_DEFINES
#include "Kreis.h"
#include "OperandenPassenNicht.h"
#include <iostream>
#include <cmath>

using namespace std;

Kreis::Kreis(Punkt2D p, double r): radius(r), zentrum(p){}

void Kreis::setzeZentrum(Punkt2D const& p) {
	this->zentrum = p;
}

void Kreis::setzeRadius(double r) {
	this->radius = r;
}

string Kreis::toString() {
	return "Radius: " + to_string(radius) + ", zentrum " + zentrum.toString();
}

GeoObjekt* Kreis::clone() const {
	return new Kreis(*this);
}

GeoObjekt& Kreis::operator=(const GeoObjekt& rhs) {
	if (this == &rhs) return *this;
	return assign(rhs);
}

GeoObjekt& Kreis::assign(const GeoObjekt& rhs) {
	const Kreis* pK = dynamic_cast<const Kreis*>(&rhs);
	if (!pK) {
		throw OperandenPassenNicht();
	}

	

	this->radius = pK->radius;
	this->zentrum = pK->zentrum;

	return *this;
}


double Kreis::inhalt() {

	double erg = M_PI * pow(radius, 2);
	return erg;
}