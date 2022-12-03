#ifndef _rukovodilac_h_
#define _rukovodilac_h_
class Posiljka;
class Artikal;
class Rukovodilac
{
public:
	virtual void obradiPodatak(Posiljka& p){}
	virtual void dodajUKatalog(Artikal& a, double m, int dani){}
};

#endif