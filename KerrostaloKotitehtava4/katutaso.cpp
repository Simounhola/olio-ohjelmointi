#include "katutaso.h"
using namespace std;

Katutaso::Katutaso() {
    maaritaKatutaso();
}

void Katutaso::maaritaKatutaso() {
    cout << "Katutaso luotu." << '\n';
}

int Katutaso::maaritaKerroksenAsukkaatJaNeliot() const {
    int kokonaiskulutus = 0;
    for (int i = 0; i < 2; ++i) {
        asunnot[i].maaritaAsukkaatJaNeliot();
        kokonaiskulutus += asunnot[i].laskeKulut();
    }
    return kokonaiskulutus;
}
