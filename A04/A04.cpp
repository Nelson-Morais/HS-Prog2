#include <iostream>
#include <list>
#include <algorithm>


using namespace std;
void showListCont(list<int>);
list<int> samsies(list<int>, list<int>);


class istTeilerVon_n
{
	int zahl;

public:
	istTeilerVon_n(int z) : zahl(z) {}
	bool operator() (int z) { 
		if ((z % zahl) == 0) {
			return true;
		}
		
		return false ; }
};

class istKuerzerAls {

	string s;
	string t;

public:
	istKuerzerAls(string s, string t) : s(s), t(t){}
	bool operator()(string s, string t) {
		if (s.length() >= t.length()) {
			return false;
		}
		return true;
	}


};


bool noSamsies(list<int> l, list<int>k) {

	list<int>::iterator it1;
	list<int>::iterator it2;


	if (l.size() <= 0 || k.size() <= 0) {
		return true;
	}
	for (it1 = l.begin(); it1 != l.end(); it1++) {
		for (it2 = k.begin(); it2 != k.end(); it2++) {

			if (*it1 == *it2) {
				return false;
			}
		}

	}
	return true;

}


list<int> samsies(list<int> l, list<int>k) {

	list<int> output;


	l.sort();
	k.sort();

	list<int>::iterator it1;
	list<int>::iterator it2;

	if (!(l.size() <= 0 || k.size() <= 0)) {
		for (it1 = l.begin(); it1 != l.end(); it1++) {
			for (it2 = k.begin(); it2 != k.end(); it2++) {
				if (*it1 == *it2) {
					output.push_back(*it1);
					
				}
			}
		} 
	}
	output.sort();
	output.unique();
	return output;



}


void showListCont(list<int> l) {

	list<int>::iterator it;

	for (it = l.begin(); it != l.end(); it++) {
		cout << *it << " " << endl;
	}

}

bool istNahe(double i){

	double a = 100.00;
	double tolerance = 0.0001;

	return (abs(i-a) <= tolerance);
}

bool besitztMehrWorteAls(string s, string t) {

	int sCounter = 0;
	int tCounter = 0;
	int pruef = 0;

	int sLaenge = s.length();
	int tLaenge = t.length();

	for (int i = 0; i < sLaenge; i++) {
		if (s[i] == ' ') {
			if (i - pruef != 1) {
				sCounter++;
			}
			pruef = i;
		}
	}
	for (int i = 0; i < tLaenge; i++) {
		if (t[i] == ' '){
			if (i - pruef != 1) {
				tCounter++;
			}
			pruef = i;
			
		}
	}
	return (tCounter < sCounter);
}


int main()
{
	list<int> list1,list2,list3,list4,list5;
	int i;
	for (i = 0; i < 10; i++) {
		list1.push_back(i * 2);
	}

	for (i = 0; i < 15; i++) {
		list2.push_front(i * 3);
	
	}
	for (i = 1; i < 5; i++) {
		list3.push_back(i * 100);

	}



	cout << "list1:" << "\n"<< endl;
	showListCont(list1);
	cout << "\n"  <<"list2:" << "\n" << endl;
	showListCont(list2);
	cout << "\n" << "list3:" << "\n" << endl;
	showListCont(list3);

	cout << "------------------------------------//------------------------------------" << endl;
	
	list<int> samsiesSamlung = samsies(list1, list2);
	cout << "Samsies: " << "\n" << endl;
	showListCont(samsiesSamlung);

	cout << "------------------------------------//------------------------------------" << endl;

	cout << "No Samsies: " << "\n" << endl;
	if (noSamsies(list1, list3))
		cout << "Does not contain same Elements" << endl;
	else
		cout << "Contains some of the same Elements" << endl;

	cout << "------------------------------------//------------------------------------" << endl;

	// 4.2 Unär:

	istTeilerVon_n poUn(3);

	list4.push_back(9);
	list<int>::iterator it4 = find_if(list4.begin(), list4.end(), poUn);
	cout << "ist Teiler von n=3: ";
	if (it4 == list4.end())
		cout << "Nein" << endl;
	else
		cout << "Ja" << endl;
	cout << "------------------------------------//------------------------------------" << endl;
	// 4.2 Binär

	string s = "Teste Mich bitte";
	string t = "ok man";

	istKuerzerAls poBi(s, t);
		
	if (poBi(s, t) != 0)
		cout << "String s ist Kuerzer" << endl;

	else
		cout << "String s ist nicht Kuerzer" << endl;

	cout << "------------------------------------//------------------------------------" << endl;


	cout << "IstNahe: "<< istNahe(120.00)<< endl;

	cout << "------------------------------------//------------------------------------" << endl;

	string s1 = "Teste Mich bitte";
	string t1 = "ok                     man";

	cout << "Besitzt mehr Worte: " << besitztMehrWorteAls(s1, t1) << endl;

}