#include "Rechteck.h"
#include "GeoObjekt.h"
#include "OperandenPassenNicht.h"

using namespace std;

Rechteck::Rechteck(Punkt2D a, Punkt2D b) : lu(a), ro(b) {};

void Rechteck::setzePunktLu(Punkt2D const& p){
	this->lu = p;
};

void Rechteck::setzePunktRo(Punkt2D const& p) {
	this-> ro = p;
}

string Rechteck::toString() {
	return "[" + lu.toString() + ro.toString() + "]";
}

GeoObjekt* Rechteck::clone() const {
	return new Rechteck(*this);
}

GeoObjekt& Rechteck::operator=(const GeoObjekt& rhs) {
	if (this == &rhs) return *this;
	return assign(rhs);
}
GeoObjekt& Rechteck::assign(const GeoObjekt& rhs) {

	const Rechteck* pK = dynamic_cast<const Rechteck*>(&rhs);
	if (!pK)
		throw OperandenPassenNicht();

	

	this->lu = pK->lu;
	this->ro = pK->ro;

	return *this;
}

double Rechteck::inhalt() {
	double breite = ro.x - lu.x;
	double hoehe = ro.y - lu.y;
	double erg = breite * hoehe;
	return erg;
}