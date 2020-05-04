class K {
 public:
 // Praefix-Inkrement
 K& operator++() { /* Implementation */ return *this; }

// += und (ggf. auf ++ zurueckfuehren)
K& operator+=(Param) { /*Implementation*/ return *this; }
};

//!
//!ausserhalb der Klasse
// Postfix Inkrement
K operator++(K& k, int) {
 K temp(k);
 ++k;
 return temp;
} 

// Addition mit neuem Ergebnis
K operator+(const K& lhs, const K& rhs) {
 K ergebnis(lhs);
 return ergebnis+=rhs;
}


