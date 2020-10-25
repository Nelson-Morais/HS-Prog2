#ifndef RINGLISTE_H
#define RINGLISTE_H

#include <vector>

class Ringliste {
private:
	friend Ringliste& operator<<(Ringliste&, int);
	
	int lesenPos;
	int schreibenPos;
	
public:
	int anzahlElemente;
	vector<int> rliste;
	Ringliste();
	Ringliste(int);
	~Ringliste();

	void increasePos(int&);
	
	string toString();
	void write(int a);
	friend Ringliste& operator<<(Ringliste&, int);
	friend bool operator==(Ringliste&, Ringliste&);
	friend Ringliste& operator+=(Ringliste&, int);
	friend Ringliste& operator<<(Ringliste&, Ringliste);

	
};



#endif

