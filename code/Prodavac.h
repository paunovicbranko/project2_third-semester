#ifndef _prodavac_h_
#define _prodavac_h_
#include "Rukovodilac.h"
#include "Artikal.h"
#include "Lista.h"
#include "Posiljka.h"

struct Katalog {
		Artikal& a;
		double marza;
		int brDanaZaNabavku;

	};

class Prodavac : public Rukovodilac
{
	
	string naziv;
	
	Lista<Katalog> listaKataloga;

public:
	friend class Posiljka;
	Prodavac(string naziv):naziv(naziv){}
	string dohNazivProdavca() const { return naziv; }
	void dodajUKatalog(Artikal& a, double m, int dani) override;
	void obradiPodatak(Posiljka& p) override;
};

#endif