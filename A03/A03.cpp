
#include <iostream>

using namespace std;

int ggT(int&,int);
int eingabeanalyse(double&, double&, double&);


int main()
{
	int navi = 0;
	int teiler1;
	int teiler2;
	double min = 0;
	double max = 0;
	double d = 0;
	int i = eingabeanalyse(min, max, d);

	do {

		cout << endl << "Aufgaben:" << endl << "Aufgabe 3.1: ggT (1)" << endl << "Aufgabe 3.2: Eingabe Analyse (2)" << endl << "Zum Beenden bitte -1 eingeben" << endl;
		cout << endl << "Waehlen sie eine Aufgabe: ";
		cin >> navi;

		switch (navi) {
		case(1):
			cout << "Erste Zahl eingeben" << endl;
			cin >> teiler1;
			cout << "Zweite Zahl eigeben" << endl;
			cin >> teiler2;
			ggT(teiler1, teiler2);
			cout << "Den groessten gemeinsamen Teiler ist: " << teiler1 << endl;
			break;


		case(2):
			

			eingabeanalyse(min, max, d);
			cout << endl << "Gueltigen Eingaben: " << i;
			break;

		default:
			break;
		
		} 
	} while (navi != -1);

}

//Euklidischer Algorithmus in Rekursiver Form
int ggT(int& a, int b) {

	int erg = 0;
	if (a < 0 || b < 0) {
		cout << "Nur Positive Zahlen sind moeglich." << endl;
		a = 0;
		return 0;
	}

	else if( b == 0 ){
		erg = a;
	}
	else {
		erg = ggT(b, a%b);
		
	}
	a = erg;
	return erg;
}

int eingabeanalyse(double& min, double& max, double& d) {
	double ein;
	int count = 0;
	int gesamt = 0;

	do {
		cout << "Fliesskommazahl eingeben zwischen -100.00 und 100.00, falsche werte werden ignoriert: (Program mit -1000 beenden)" << endl;
		cin >> ein;
		if (ein >= -100.00 && ein <= 100.00) {
			if (count == 0) {
				min = ein;
				max = ein;
				
			}

			if (min > ein) {
				min = ein;
			}
			if (max < ein) {
				max = ein;
			}
			
			gesamt = gesamt + ein;
			d = gesamt / ++count;
			
			cout << "Min: " << min << ", Max: " << max << ", Durchschnitt: " << d << endl;
		}
		else {
			cout << "Fehler: Nur Zahlen Zwischen - 100.00 und 100.00;" << endl;
		}
	} while (ein != -1000);

	return count;
}
