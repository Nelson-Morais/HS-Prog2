// A06.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
void swap(int* a, int* b) { //erwartet wird Zwei Referenzen die auf Int im speicher zeigen.
	
	int temp = *a; //temp speichert der Wert des DEREFERENZIERTES a.
	*a = *b; //das DEREFERENZIERTE a übernimmt den Wert von DEREFERENZIERTEN b.
	*b = temp; //DEREFERENZIERTEN b übernimmt den wert von Temp
}

void eingabe(int* a, int* b) { //erwartet werden Zwei referenzen die auf Int im speicher zeigen.
	

	cout << "1. Zahl:\n";
	cin >> *a; //DEREFERENZIERTES a bekommt vom Cin ein wert.
	cout << "2. Zahl:\n";
	cin >> *b; //DEREFERENZIERTES b bekommt vom Cin ein wert.

}

int main()
{
	int x = 12;
	int y = 123;
	int* z = &x;

	int** dz = &z;

	cout << "Aufgabe 1 testlauf: \n";
	*z = 17;
	cout << "Referenz x: " << &x << " referenz z: " << &z << " Dz: " << dz << "	*z: " << *z << " Wert x: " << x << endl;

	*dz = &y;

	cout << "Referenz x: " << &x << " referenz z: " << &z << " Dz: " << dz << "	*z: " << *z << " Wert x: " << x << endl;

	*z = 21;	

	cout << "Referenz x: " << &x << " referenz z: " << &z << " Dz: " << dz << "	*z: " << *z << " Wert x: " << x << endl;

	cout << "Aufgabe 2:\n";

	int eingabeeins, eingabezwei; // beide Ints bekommen eine referenz im stack die auf ein wertlosen heap zeigt.

	eingabe(&eingabeeins, &eingabezwei); //& übergibt die referenz von beiden Int variablen weiter. Weiter: eingabe Methode lesen. 
	swap(&eingabeeins, &eingabezwei); //& übergibt die referenz von beiden Int variablen weiter. Weiter: Swap Methode lesen.
	cout << "1 Zahl: " << eingabeeins << ", 2 Zahl: " << eingabezwei<<"\n"; //Ausgabe: eingabeeins Wert an speicher stelle "x" wird ausgegeben. Eingabezwei Wert an speicherstelle "y" wird ausgegeben.


}


