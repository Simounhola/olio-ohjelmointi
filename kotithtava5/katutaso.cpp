#include "katutaso.h"
using namespace std;

Katutaso::Katutaso() {
    for (int i = 0; i < 2; ++i) {
        asunnot[i] = new Asunto;
    }
    maaritaKatutaso();
}

Katutaso::~Katutaso() {
    for (int i = 0; i < 2; ++i) {
        delete asunnot[i];
    }
}

void Katutaso::maaritaKatutaso() {
    cout << "Katutaso luotu." << '\n';
}

int Katutaso::maaritaKerroksenAsukkaatJaNeliot() const {
    int kokonaiskulutus = 0;
    for (int i = 0; i < 2; ++i) {
        asunnot[i]->maaritaAsukkaatJaNeliot();
        kokonaiskulutus += asunnot[i]->laskeKulut();
    }
    return kokonaiskulutus;
}
