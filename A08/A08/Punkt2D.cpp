#include "Punkt2D.h"

using namespace std;

Punkt2D::Punkt2D(double x, double y) : x(x), y(y){}

string Punkt2D::toString() {
	return "(" + to_string(x) + "," + to_string(y) + ")";
}