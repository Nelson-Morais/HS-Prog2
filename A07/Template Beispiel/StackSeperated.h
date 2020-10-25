/*
 * ============================================================================
 * 
 * Programm:        Templates_Beispiel
 * 
 * Datei:           StackSeperated.h
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

#ifndef STACKSEPERATED_H
#define STACKSEPERATED_H

#include <vector>
#include <string>


template<class T>
class StackSeperated{
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
    StackSeperated(int);
    
    /*
     * Funktion:        Destruktor
     * 
     * Beschreibung:    Loescht das Objekt
     */
    ~StackSeperated();
    
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




#endif /* STACKSEPERATED_H */

