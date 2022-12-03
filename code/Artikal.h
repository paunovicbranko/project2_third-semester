#ifndef _artikal_h_
#define _artikal_h_
#include <string>
using namespace std;

class Artikal
{
	string naziv;
	int barKod;
	double nabCena;

public:
	Artikal(string naziv, int barKod, double nabCena) :naziv(naziv), barKod(barKod), nabCena(nabCena) {}

	string dohNaziv() const { return naziv; }
	int dohBarKod() const { return barKod; }
	double dohNabCenu() const { return nabCena; }

	friend bool operator==(Artikal& a, Artikal& b) {
		if (a.barKod == b.barKod) return true;
		return false;
	}
};

#endif