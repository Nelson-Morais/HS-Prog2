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
	double volumen = (4 / 3.0) * M_PI * r3;
	
	return volumen;
}

GeoObjekt* Ball::clone() const {
	return new Ball(*this);
}

Ball& Ball::assign(const GeoObjekt& rhs) {
	const Ball* pK = dynamic_cast<const Ball*>(&rhs);

	if (!pK) throw OperandenPassenNicht();

	GeoObjekt::assign(rhs);

	this->radius = pK->radius;
	this->zentrum = pK->zentrum;

	return *this;
}