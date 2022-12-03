#ifndef _greske_h_
#define _greske_h_
#include <iostream>
using namespace std;

class GPraznaPozicija {

	friend ostream& operator<<(ostream& it, const GPraznaPozicija& t) {
		it << "Ne postoji artikal na toj poziciji!";
		return it;
	}
};

class GPosiljkaObradjena {

	friend ostream& operator<<(ostream& it, const GPosiljkaObradjena& t) {
		it << "Posiljka je vec obradjena!";
		return it;
	}
};
class GNijeIzracunato {

	friend ostream& operator<<(ostream& it, const GNijeIzracunato& t) {
		it << "Detalji nisu izracunati!";
		return it;
	}
};

#endif