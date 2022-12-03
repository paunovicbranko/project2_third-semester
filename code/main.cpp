#include <iostream>
#include "Artikal.h"
#include "Prodavac.h"
#include "Greske.h"
using namespace std;

int main() {
	try {
		Artikal a1("Cvece", 2211, 300);
		Rukovodilac* p1 = new Prodavac("Biljana");
		p1->dodajUKatalog(a1, 1.2, 2);
		Posiljka pp(&a1);
		pp += p1;
		pp.obradiPosiljku();
		cout << pp.dohDetaljeBrDana() << " " << pp.dohDetaljeCena();
	}
	catch (GNijeIzracunato g) {
		cout << g;
	}
	catch(GPosiljkaObradjena g){
		cout << g;
	}
	catch(GPraznaPozicija g){
		cout << g;
	}
}