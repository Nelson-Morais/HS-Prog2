#include <iostream>

#include <sstream>
using namespace std;


#include "Ringliste.h"

Ringliste::Ringliste() :rliste(10), lesenPos(0), schreibenPos(0), anzahlElemente(0) {}
Ringliste::Ringliste(int size) : rliste(size), lesenPos(0), schreibenPos(0), anzahlElemente(0) {}
Ringliste::~Ringliste() {
	cout << "Byeeeee..." << endl;
}

void Ringliste::increasePos(int& position) {

	position++;

	if (position >= rliste.size()) {
		position = 0;
	}

}



string Ringliste::toString() {
	stringstream stream;
	stream << anzahlElemente << "/" << rliste.size() << " | ";

	if (anzahlElemente != 0) {
		int position = lesenPos;

		do
		{
			stream << " " << rliste.at(position);
			increasePos(position);
		} while (position != schreibenPos);
	}


	return stream.str();
}

void Ringliste::write(int a) {

	rliste.at(schreibenPos) = a;
	if (anzahlElemente < rliste.size()) {
		anzahlElemente++;
	}
	else if (anzahlElemente >= rliste.size()) {
		increasePos(lesenPos);
	}
	increasePos(schreibenPos);
}





bool operator==(Ringliste& a, Ringliste& b) {
	if (a.anzahlElemente != b.anzahlElemente) {
		return false;
	}
	for (int i = 0; i < a.rliste.size(); i++) {
		if (a.rliste.at(a.lesenPos) != b.rliste.at(b.lesenPos)) {
			return false;
		}
		a.increasePos(a.lesenPos);
		b.increasePos(b.lesenPos);
	}
	return true;
}

Ringliste& operator<<(Ringliste& rListe, int a) {
	rListe.write(a);
	return rListe;
}

Ringliste& operator +=(Ringliste& a, int add) {
	for (int i = 0; i < a.rliste.size(); i++) {
		if (a.rliste[i] != 0) {
			a.rliste[i] = a.rliste[i] + add;
		}
	}
	return a;
}

Ringliste& operator <<(Ringliste& a, Ringliste b) {

	for (int i = 0; i < b.anzahlElemente; i++) {
		a.write(b.rliste.at(i));
	}

	return a;
}

