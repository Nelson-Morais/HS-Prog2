//
//  main.cpp
//  XCode_Java2Cpp
//
//  Created by Oliver Henkel on 26.02.20.
//  Copyright © 2020 Oliver Henkel. All rights reserved.
//

#include<iostream>
#include<iomanip>         ///Manipulatoren
using namespace std;

int main() {
 char buchstabe;
 cin >> buchstabe;
 cout << ( (buchstabe>='A') && (buchstabe<='Z') );
   // true, falls Grossbuchstabe
 
 cout << setw(10) << setfill('.') << "Hallo" << endl;
   // .....Hallo
 cout << left << setw(10) << setfill('_') << "Hallo" << endl;
   // Hallo_____

 return 0;
}
