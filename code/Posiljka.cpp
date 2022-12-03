#include "Posiljka.h"

int Posiljka::cnt = 1;

int Posiljka::dohDetaljeBrDana()
{
    if (izvrseno == false) throw GNijeIzracunato();
    return d.brDana;
}

double Posiljka::dohDetaljeCena()
{
    if (izvrseno == false) throw GNijeIzracunato();
    return d.cena;
}

Posiljka& Posiljka::operator+=(Rukovodilac*& r)
{
    if (izvrseno == true) throw GPosiljkaObradjena();
    lista += r;
    return *this;
}

void Posiljka::obradiPosiljku()
{
    for (int i = 0; i < lista.dohBroj(); i++) {
        lista[i]->obradiPodatak(*this);
    }
    izvrseno = true;
}

ostream& operator<<(ostream& it, const Posiljka& p)
{
    return it << "Posiljka[" << p.id << ", " << p.a->dohNaziv() << "]";
}
