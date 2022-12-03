#ifndef _posiljka_h_
#define _posiljka_h_
#include "Artikal.h"
#include "Rukovodilac.h"
#include "Lista.h"
#include "Prodavac.h"

class Posiljka
{
	Artikal* a;
	static int cnt;
	int id = cnt;
	Lista<Rukovodilac*> lista;
	bool izvrseno;

	struct Detalji {
		int brDana = 0; double cena = 0;
	};
	Detalji d;

public:
	friend class Rukovodilac;
	friend class Prodavac;
	Posiljka(Artikal* a) :a(a){}
	int dohDetaljeBrDana();
	double dohDetaljeCena();

	Posiljka& operator+=(Rukovodilac*& r);
	void obradiPosiljku(); //ZA svakog rukovodioca pozvati obradiPosiljku (*this)

	friend ostream& operator<<(ostream& it, const Posiljka& p);
};

#endif