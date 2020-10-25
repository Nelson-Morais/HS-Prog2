/*
 * ============================================================================
 * 
 * Programm:        Templates_Beispiel
 * 
 * Datei:           Stack.hpp
 * 
 * Autor:           Felix Kahmann
 * 
 * Beschreibung:    Die Klasse Stack realisiert einen einfachen Stack-Speicher
 *                  fuer beliebige Datentypen.
 * 
 *                  Weitere Informationen finden sich in der Datei main.cpp
 * 
 * Programmieren 2 Vorlesung / Praktikum - Hochschule Osnabrueck I&I
 * 
 * ============================================================================
 */

#ifndef STACK_HPP
#define STACK_HPP

#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <iostream>

template<class T>
class Stack{
    int kap;
    std::vector<T> werte;
public:
    /*
     * Funktion:        Konstruktor
     * 
     * Beschreibung:    Erzeugt ein neues Objekt und legt die Kapazitaet fest.
     * 
     * in:              int         | Kapazitaet des Stacks
     */
    Stack(int);
    
    /*
     * Funktion:        Destruktor
     * 
     * Beschreibung:    Loescht das Objekt
     */
    ~Stack();
    
    /*
     * Funktion:        push
     * 
     * Beschreibung:    Legt ein Objekt auf dem Stack ab, sofern Platz ist.
     * 
     * in:              T           | Objekt, das abgelegt wird
     * 
     * out:             bool        | true - Wenn Objekt abgelegt wurde
     *                                false - Wenn Objekt nicht abgelegt wurde.
     */
    bool push(T);
    
    /*
     * Funktion:        pop
     * 
     * Beschreibung:    Entfernt Objekt, das oben auf dem Stack liegt,
     *                  falls eines vorhanden ist.
     * 
     * int  :             T         | Das Objekt, das oben of dem Stack liegt,
     *                                NULL wenn der Stack leer ist.
     */
    T pop();
    
    /*
     * Funktion:        toString
     * 
     * Beschreibung:    Interpretiert den Stack als String und gibt diesen
     *                  String zurueck. Da dies eine einfache Implementation
     *                  ist, wird vorausgesetzt, dass T mindestens
     *                  std::stringstream&
     *                          operator<<(std::stringstream&, const T&)
     *                  ueberlaedt.
     * 
     * in:              T           | Objekt, das abgelegt wird
     * 
     * out:             std:string  | true - Wenn Objekt abgelegt wurde
     *                            false - Wenn Objekt nicht abgelegt wurde.
     */
    std::string toString();
};

//-----------------------------------------------------------------------------
// Beginn der Implementation in der selben Datei

template<class T>
Stack<T>::Stack(int parKapazitaet): kap(parKapazitaet){
    std::cout << "Stack erzeugt!" << std::endl;
}

template<class T>
Stack<T>::~Stack(){
    std::cout << "Stack geloescht!" << std::endl;
}

template<class T>
bool Stack<T>::push(T element){
    if(this->werte.size() < this->kap){
        this->werte.push_back(element);
        return true;
    }
    return false;
}

template<class T>
T Stack<T>::pop(){
    if(this->werte.empty()){
        return 0;
    }
    T tmp = this->werte[this->werte.size() - 1];
    this->werte.pop_back();
    return tmp;
}

template<class T>
std::string Stack<T>::toString(){
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

#endif /* STACK_HPP */