#include "kerros.h"
using namespace std;

Kerros::Kerros() {
    for (int i = 0; i < 4; ++i) {
        asunnot[i] = new Asunto;
    }
}

Kerros::~Kerros() {
    for (int i = 0; i < 4; ++i) {
        delete asunnot[i];
    }
}

void Kerros::maaritaAsunnot() {

}

int Kerros::maaritaKerroksenAsukkaatJaNeliot() const {
    int kokonaiskulutus = 0;
    for (int i = 0; i < 4; ++i) {
        asunnot[i]->maaritaAsukkaatJaNeliot();
        kokonaiskulutus += asunnot[i]->laskeKulut();
    }
    return kokonaiskulutus;
}
