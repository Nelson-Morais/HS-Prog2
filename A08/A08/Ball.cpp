#define _USE_MATH_DEFINES
#include "Ball.h"
#include "OperandenPassenNicht.h"
#include <cmath>

using namespace std;

Ball::Ball(Punkt3D zentrum, double radius) : radius(radius), zentrum(zentrum){}

void Ball::setzeZentrum(Punkt3D const& p) {
	this->zentrum = p;
}

void Ball::setzeRadius(double r) {
	this->radius = r;
}

string Ball::toString() {
	return  +"[" + zentrum.toString() +", " + to_string(radius) + "]";
}

double Ball::inhalt() {
	
	double r3 = pow(radius, 3);
	double volumen = (M_PI*pow(radius, 3))*4/3;
	
	return volumen;
}

GeoObjekt* Ball::clone() const {
	return new Ball(*this);
}

GeoObjekt& Ball::operator=(const GeoObjekt& rhs) {
	if (this == &rhs) return *this;
	return assign(rhs);
}

GeoObjekt& Ball::assign(const GeoObjekt& rhs) {
	const Ball* pK = dynamic_cast<const Ball*>(&rhs);

	if (!pK) throw OperandenPassenNicht();



	this->radius = pK->radius;
	this->zentrum = pK->zentrum;

	return *this;
}