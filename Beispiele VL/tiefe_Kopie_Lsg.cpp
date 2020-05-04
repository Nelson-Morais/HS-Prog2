/*
 * -----------------------------------------------------------------------------
 *
 * Liveprojekt: tiefe_Kopie.cpp
 *
 *
 ****
 * Ziel:
 * - Implementation einer tiefen Kopie in KK und operator=
 ****
 *
 * VL Fortgeschrittene Programmierung, O. Henkel, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Klasse fuer ein dynamisches Feld, dessen Indexbereich bei der Erzeugung
 * angegeben werden kann;
 * Zu Vorfuehrzwecken wird die Klasse hier bei der Vereinbarung sofort
 * implementiert
 */

class Array {
    int size, min, max;
    int *data;
public:
    // Konstruktor/Destruktor
    Array() : size(0), min(0), max(0),
              data(0) {}

    Array(int _min, int _max) :
            size(_max - _min), min(_min), max(_max),
            data(new int[size]) {}

    ~Array() { delete[] data; }

/****
  // Kopierkonstruktor --- tiefe Kopie
  Array(const Array& orig) :
  size(orig.size), min(orig.min), max(orig.max),
          data(new int[size]) {
      for (int i=0; i<size; i++) data[i]=orig.data[i];
  }

  // Zuweisungsoperator --- tiefe Kopie
  Array& operator=(const Array& rhs) {
      if (this==&rhs) return *this;
      delete [] data;
      size=rhs.size; min=rhs.min; max=rhs.max;
      data=new int[size];
      for (int i=0; i<size; i++) data[i]=rhs.data[i];
      return *this;
  }
*****/
    // []-Operator
    int &operator[](int i) {
        if (i < min or i >= max)
            throw "Array::Bereichsueberschreitung";
        return data[i - min];
    }

    // Methoden
    int Min() { return min; }

    int Max() { return max; }

    void info() {
        cout << setw(2) << size << " [" << min << ',' << max << ") | ";
        for (int i = 0; i < size; i++)
            cout << setw(3) << data[i] << " ";
        cout << endl;
    }
};


/*
 * Demonstration
 */
int main() {

    Array a(10, 15);  // integer-Feld mit 5 Elementen
    for (int i = a.Min(); i < a.Max(); i++) a[i] = i * i;

    Array b(a);           // tiefe // Kopie anlegen

    Array c;
    c = a;                  // tiefe // Zuweisung vornehmen
    c = c;

    a[10] = 1;
    c[14] = 2;
    a.info();
    b.info();
    c.info();

    return 0;             // Destruktoraufrufe wuerden bei flacher Kopie
}                       // einen Laufzeitfehler verursachen!
