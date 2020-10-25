/*
 * ============================================================================
 * 
 * Programm:        Templates_Beispiel
 * 
 * Datei:           StackSeperated.cpp
 * 
 * Autor:           Felix Kahmann
 * 
 * Beschreibung:    Die Klasse StackSeperated realisiert einen einfachen 
 *                  Stack-Speicher fuer beliebige Datentypen.
 * 
 *                  Weitere Informationen finden sich in der Datei main.cpp
 * 
 * Programmieren 2 Vorlesung / Praktikum - Hochschule Osnabrueck I&I
 * 
 * ============================================================================
 */

#include "StackSeperated.h"
#include <iterator>
#include <sstream>
#include <iostream>

template<class T>
StackSeperated<T>::StackSeperated(int parKapazitaet): kap(parKapazitaet){
    std::cout << "Stack erzeugt!" << std::endl;
}

template<class T>
StackSeperated<T>::~StackSeperated(){
    std::cout << "Stack geloescht!" << std::endl;
}

template<class T>
bool StackSeperated<T>::push(T element){
    if(this->werte.size() < this->kap){
        this->werte.push_back(element);
        return true;
    }
    return false;
}

template<class T>
T StackSeperated<T>::pop(){
    if(this->werte.empty()){
        return 0;
    }
    T tmp = this->werte[this->werte.size() - 1];
    this->werte.pop_back();
    return tmp;
}

template<class T>
std::string StackSeperated<T>::toString(){
    std::stringstream sstream;
    sstream << "Stack " << this->werte.size() << "/" << this->kap << " | ";
    
    for(typename std::vector<T>::reverse_iterator it = this->werte.rbegin(); it != this->werte.rend(); it++){
        if(it == this->werte.rbegin()){
            sstream << *it;
        }
        else{
            sstream << ", " << *it;
        }
    }
    
    return sstream.str();
}

template class StackSeperated<std::string>;
// Hier wird explizit die Umsetzung der Template Klasse StackSeperated fuer
// Strings gewuenscht. Um die Klasse StackSeperated im weiteren Programm z.B.
// fuer Integers zu nutzen, muesste hier zunaechst expilizit die Umsetzung
// der Klasse StackSeperated fuer Integers gefordert werden, mittels
// template class StackSeperated<int>;
//
// -> Die Klasse StackSeperated ist zwar getrennt voneinander definiert und
// implementiert, allerdings wird dadurch die Verwendung unflexibel, da
// vorher bekannt sein muss, fuer welche Datentypen die Klasse umgestzt werden
// soll. Anders als bei der Klasse Stack, welche flexibel verwendet werden kann.