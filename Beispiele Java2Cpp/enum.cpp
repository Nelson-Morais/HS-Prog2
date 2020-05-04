//
//  main.cpp
//  XCode_Java2Cpp
//
//  Created by Oliver Henkel on 26.02.20.
//  Copyright © 2020 Oliver Henkel. All rights reserved.
//

#include<iostream>
using namespace std;

int main() {
 // Neuer Aufzaehlungstyp Ampel
 enum Ampel { rot, gelb, gruen };
 
 // eine Ampelvariable
 Ampel ampel_ecke_lessingstrasse=rot;
 
 //
 if (ampel_ecke_lessingstrasse==rot) { /* warten */ }
 
 // Ampel weiterschalten
 ampel_ecke_lessingstrasse = gruen;
 int interneNr {ampel_ecke_lessingstrasse}; // 2
 cout << interneNr << endl;
 cout << gruen << endl;
 
 return 0;
}
