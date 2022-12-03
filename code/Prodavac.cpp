#include "Prodavac.h"

void Prodavac::dodajUKatalog(Artikal& a, double m, int dani)
{
	Katalog k1{ a,m,dani };
	listaKataloga += k1;
}

void Prodavac::obradiPodatak(Posiljka& p)
{
	for (int i = 0; i < listaKataloga.dohBroj(); i++) {
		if (p.a == &listaKataloga[i].a){
			double prCena = p.a->dohNabCenu() * listaKataloga[i].marza;
			p.d.brDana += listaKataloga[i].brDanaZaNabavku;
			p.d.cena += prCena;
		}

	}
}
