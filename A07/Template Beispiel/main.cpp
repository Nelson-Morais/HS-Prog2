/*
 * ============================================================================
 * 
 * Programm:        Templates_Beispiel
 * 
 * Datei:           main.cpp
 * 
 * Autor:           Felix Kahmann
 * 
 * Beschreibung:    Dieses Programm realisiert einen einfachen Stack-Speicher.
 *                  Die beiden Klassen Stack und StackSeperated setzen dabei
 *                  den selben Stack um, der einzige Unterschied ist, dass die
 *                  Klasse Stack in einer Datei definiert und implementiert
 *                  wurde, waehrend die Klasse StackSeperated eine Header-Datei
 *                  fuer die Definition und eine Source-Datei fuer die
 *                  Implementation hat.
 * 
 *                  Aus diesen beiden Ansaetzen ergeben sich einige Vorteile und
 *                  Nachteile:
 * 
 *                  Der Vorteil eine Klassen-Schablone in einer Datei zu
 *                  definieren und implementieren (wie Klasse Stack) besteht
 *                  darin, dass man diese Klasse fuer jeden beliebigen
 *                  Datentyp und jede beliebige Klasse verwenden kann.
 *                  Also z.B. Stack<int>, Stack<string>, Stack<EigeneKlasse>
 * 
 *                  Der Nachteil eine Klassen-Schablone in zwei Dateien
 *                  aufzuteilen (wie Klasse StackSeperated), so wie bei 
 *                  herkoemmlichen Klassen, besteht darin, dass man diese Klasse
 *                  NICHT sofort fuer jeden beleibigen Datentyp / jede Klasse
 *                  verwenden kann, sondern man fuer jeden zu verwendenden
 *                  Datentyp, jede Klasse eine explizite Anweisung schreiben
 *                  muss (s. Datei StackSeperated.cpp ganz unten).
 * 
 * Programmieren 2 Vorlesung / Praktikum - Hochschule Osnabrueck I&I
 * 
 * ============================================================================
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>
#include "Stack.hpp"
#include "StackSeperated.h"

using namespace std;

int main(int argc, char** argv) {
    
    cout << setw(50) << setfill('=') << "=" << endl << "\t\tStack 1 testen"
            << endl << setw(50) << setfill('=') << "=" << endl;
    
    Stack<string>* stack = new Stack<string>(10);
    
    cout << stack->toString() << endl;
    
    stack->push("test-1");
    stack->push("test-2");
    stack->push("test-3");
    stack->push("test-4");
    stack->push("test-5");
    stack->push("test-6");
    stack->push("test-7");
    stack->push("test-8");
    stack->push("test-9");
    stack->push("test-10");
    stack->push("test-11");
    
    cout << stack->toString() << endl;
    
    cout << stack->pop() << endl;
    cout << stack->pop() << endl;
    cout << stack->pop() << endl;
    
    cout << stack->toString() << endl;
    
    delete(stack);
    
    cout << setw(50) << setfill('=') << "=" << endl << "\t\tStack 2 testen"
            << endl << setw(50) << setfill('=') << "=" << endl;
    
    StackSeperated<string>* stack2 = new StackSeperated<string>(10);
    
    cout << stack2->toString() << endl;
    
    stack2->push("test-1");
    stack2->push("test-2");
    stack2->push("test-3");
    stack2->push("test-4");
    stack2->push("test-5");
    stack2->push("test-6");
    stack2->push("test-7");
    stack2->push("test-8");
    stack2->push("test-9");
    stack2->push("test-10");
    stack2->push("test-11");
    
    cout << stack2->toString() << endl;
    
    cout << stack2->pop() << endl;
    cout << stack2->pop() << endl;
    cout << stack2->pop() << endl;
    
    cout << stack2->toString() << endl;
    
    delete(stack2);
    
    return 0;
}

