#include <iostream>
#include "inkrement.h"
using namespace std;



int twoPointOne();
void swap(int&, int&);
void eingabe(int&, int&);
void aufruf();

int zaehler = 0;



int main()
{


	int navi = 0;
	int eingabeA;
	int eingabeB;
	int aufrufen;

	do {

		cout << endl << "Aufgaben:" << endl << "Aufgabe 2.1: Datentypen (1)" << endl << "Aufgabe 2.2: Referenzen (2)" << endl << "Aufgabe 2.3: Statisch Variable (3)" << endl << "Aufgabe 2.4: Globale Variable/extern/modulare Programmierung (4)" << endl << "Zum Beenden bitte -1 eingeben" << endl;
		cout << endl << "Waehlen sie eine Aufgabe: ";
		cin >> navi;

		switch (navi) {

		case(1):
			twoPointOne();
			cout << endl << twoPointOne() << endl;
			break;
		case(2):
			cout << "-- Eingabe wird ausgefuehrt --"
				<< endl;
			eingabe(eingabeA, eingabeB);
			cout << "-- Swap wird ausgefuehrt --"
				<< endl;
			swap(eingabeA, eingabeB);

			break;
		case(3):

			cout << "Wie oft wollen sie die Funktion aufrufen ?" << endl;
			cin >> aufrufen;
			if (aufrufen <= 0) {
				cout << "Nope";
			}
			else {

				while (aufrufen != 0) {
					aufruf();
					aufrufen--;
				}
			}
			break;
		case(4):

			cout << "Wie oft wollen sie die Funktion aufrufen ?" << endl;
			cin >> aufrufen;
			if (aufrufen <= 0) {
				cout << "Nope";
			}
			else {
				while (aufrufen != 0) {
					inkrement();
					aufrufen--;
				}
			}
			break;
		default:
			break;
		}

	} while (navi != -1);


}
int twoPointOne() {

	int i = 0;
	float f = 0;

	while (i == (int)f) {

		i++;
		f++;
	}

	return i;

}




void eingabe(int& a, int& b) {

	cout << "Int a eingeben: ";
	cin >> a;
	cout << "Int b eingeben: ";
	cin >> b;
	// anhand & wird es auf die 2 Variablen referenziert im speicher die vom Compiler bekannt sind. Da es die referenzierung erfolgt,
	// werden diese geändert und übernehmen den neuen wert im gleichen speicher stelle ( erfolgt keine Kopie ).

}

void swap(int& a, int& b) {

	cout << "swap --" << " Int a: " << a << ", Int B: " << b << " vor Swap" << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "swap --" << " Int a: " << a << ", Int B: " << b << " nach Swap" << endl;

	//hier werden nochmal die beide Variablen im speicher angesprochen, vertauscht, und übernehmen die neuen Werten, für den Compiler
	//ist der neunen Wert bekannt weil die im speicher überschrieben werden und nicht kopiert und auf ein neuen speicher platz gelegt werden.

}

void aufruf() {
	static int counter = 0;

	counter++;
	cout << counter << ". Aufruf" << endl;

}