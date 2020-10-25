#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;
bool fib(int);
float runden(float, int);
void summeDiff(int, int, int&, int&);
int summe(int);
float addiereUhrzeit(float, float);
bool zifferPruefung(string, string);
void aufgabe02();




int main()
{

	int a;
	int b;
	int n;
	float f1;
	float f2;
	string s1;
	string s2;
	int summe1 = 0;
	int diff1 = 0;






	cout << "Waehlen sie eine Aufgabe: " << endl << "Aufgabe: Fibonacci (1)" << endl << "Aufgabe: Nach n kommastellen runden (2)" << endl << "Aufgabe: Summe und Differenz (3)" << endl << "Aufgabe: Summe zwischen 0 und n (4)" << endl << "Aufgabe: Uhrzeit Addieren (5)" << endl << "Aufgabe: Ziffer prüfen (6)" << endl << "Aufgabe: Aufgabe2 (7)" << endl;
	do {


		cout << "" << endl << "Aufgabe Nummer eingeben: (Zum Beenden -1 eingeben)" << endl;
		cin >> a;



		switch (a) {
		case(1):
			cout << "Zahl eingeben: ";
			cin >> n;
			fib(n);
			break;
		case(2):
			cout << "Float Eingeben" << endl;
			cin >> f1;
			cout << "Auf wiviel Stellen wollen sie runden" << endl;
			cin >> n;
			runden(f1, n);

			break;
		case(3):


			cout << "Erster Zahl eingeben" << endl;
			cin >> a;
			cout << "Zweite Zahl eingeben" << endl;
			cin >> b;

			summeDiff(a, b, summe1, diff1);

			cout << "Summe: " << summe1 << endl << "Diff: " << diff1;
			break;
		case(4):
			int n;
			cout << "Zahl eingeben: " << endl;
			cin >> n;
			summe(n);
			break;
		case(5):
			cout << "Uhrzeit eingeben: " << endl;
			cin >> f1;
			cout << "Uhrzeit eingeben: " << endl;
			cin >> f2;
			addiereUhrzeit(f1, f2);
			break;
		case(6):
			cout << "Zahl eingeben: " << endl;
			cin >> s1;

			cout << "Zahl zum Prüfen: " << endl;
			cin >> s2;
			zifferPruefung(s1, s2);
			break;
		case(7): aufgabe02();
		default:
			break;
		}
	} while (a != -1);

}






bool fib(int n)
{


	int a = 0;
	int b = 1;
	int temp;
	if (n == 0)
	{
		return true;
	}
	if (n == 1)
	{
		return true;
	}
	else {
		for (int i = 0; i < n; i++) {
			temp = a + b;

			a = b;

			b = temp;

			if (n == temp) {
				cout << "Fibonacci" << endl;
				return true;
			}
		}

	}
	cout << "Kein Fibonnaci" << endl;
	return false;

}

float runden(float f, int n)
{

	for (int i = 0; i < n; i++) {
		f = f * 10;
	}

	float ferg = (int)f;
	float temp1 = f - ferg;

	if (temp1 > 0.5) {
		ferg++;
	}
	for (int i = 0; i < n; i++) {
		ferg = ferg / 10;
	}

	cout << ferg;
	return ferg;

}

void summeDiff(int a, int b, int& summe1, int& diff1)
{

	summe1 = a + b;
	diff1 = a - b;
	


}

int summe(int n)
{
	int a = 0;

	if (n < 0)
	{
		cout << -1 << endl;
		return -1;
	}
	else if (n == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	else if (n == 1)
	{
		cout << 1 << endl;
		return 1;

	}

	else
	{
		for (int i = 1; i < n; i++)
		{
			a = a + i;

		}
		cout << n + a << endl;
		return n + a;
	}
}
float addiereUhrzeit(float a, float b)
{

	if (a > 23.59) {
		cout << "Uhrzeit Zwischen 00:00 und 23:59 eingeben: ";
		cin >> a;
	}
	if (b > 23.59) {
		cout << "Uhrzeit Zwischen 00:00 und 23:59 eingeben: ";
		cin >> b;
	}
	float min1 = a - (int)a;
	float std1 = a - min1;

	float min2 = b - (int)b;
	float std2 = b - min2;

	int stdall = (int)(std1 + std2);
	min1 = min1 * 100;
	min2 = min2 * 100;
	float minall = min1 + min2;

	int reststd = 0;
	int restmin = 0;

	if (stdall > 23) {
		reststd = ((stdall) % 24);
		stdall = reststd;
	}
	if (minall > 59) {
		restmin = (int)minall % 60;
		stdall++;
		minall = restmin;
	}
	float uhrZeit;
	if (stdall + minall / 100 > 23)
	{
		int restUhrzeit = ((stdall) % 24);
		uhrZeit = restUhrzeit + minall / 100;
		cout << "Die Uhrzeit ist: " << uhrZeit;


	}
	else {
		uhrZeit = stdall + minall / 100;
		cout << "Die Uhrzeit ist: " << uhrZeit;

	}



	return uhrZeit;
}

bool zifferPruefung(string a, string n) {


	if (a.find(n) != std::string::npos) {
		cout << "Found " << n << endl;
		return true;
	}
	cout << n << " Not Found";
	return false;
}

void aufgabe02() {

	ifstream ein("eingabe.txt");
	ofstream aus("ausgabe.txt");

	int lineCounter = 0;


	int a;
	float f;
	string str;

	while (!(ein >> a >> f >> str).eof()) {
		aus << ++lineCounter << ".: | " << hex << setw(4) << setfill('0') << a << " | " << setprecision(6) << f << " | " << setw(15) << setfill('-') << str << endl;

	}
	cout << "Datei ausgabe.txt wurde erzeugt" << endl;

}



