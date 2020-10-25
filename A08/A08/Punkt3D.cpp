#include "Punkt3D.h"

using namespace std;

Punkt3D::Punkt3D(double x, double y, double z): x(x), y(y), z(z){}

string Punkt3D::toString() {
	return "(" + to_string(x) + "," + to_string(y) + "," + to_string(z) + ")";
}