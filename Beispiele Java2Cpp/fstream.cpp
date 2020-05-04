//
//  main.cpp
//  XCode_Java2Cpp
//
//  Created by Oliver Henkel on 27.02.20.
//  Copyright © 2020 Oliver Henkel. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
 //Eingbestrom anlegen und mit Datei "eingabe.txt" verbinden
 ifstream ein("eingabe.txt");
 //Ausgabestrom anlegen und mit Datei "ausgabe.txt" verbinden
 ofstream aus("ausgabe.txt");
 if(!ein || !aus){ //Pruefen ob die Datein geoeffnet wurden
  cout << "Fehler beim Oeffnen der Dateien" << endl; exit(1);
 }
 
 // Datei kopieren und dabei Werte verdreifachen
 double wert;
 while(!(ein >> wert).eof()) //Einlesen bis End of File
  aus << "Wert=" << setw(6) << 3*wert << endl;
 ein.close();
 aus.close();
 cout << "Ende" << endl;
}
