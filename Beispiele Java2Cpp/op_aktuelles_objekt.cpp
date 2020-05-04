class K {
 public:
 // Praefix-Operatoren
 K& operator++() { /* Implementation */ return *this; }
 K& operator--() { /* Implementation */ return *this; }

// += und -= (ggf. auf ++/-- zurueckfuehren)
K& operator+=(Param) { /*Implementation*/ return *this; }
K& operator-=(Param) { /*Implementation*/ return *this; }

// Weitere, z.B. *= und /= (ggf. auf +=/-= zurueckfueren)...
};


