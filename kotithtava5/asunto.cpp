#include "asunto.h"
using namespace std;

Asunto::Asunto() : asukkaat(2), neliot(100) {
    cout << "Asunto luotu" << '\n';
}

Asunto::~Asunto() {
    // Tässä voit vapauttaa mahdolliset resurssit
}

void Asunto::maaritaAsukkaatJaNeliot() const {
    cout << "Asunto maaritetty asukkaita = " << getAsukkaat() << " nelioita = " << getNeliot() << '\n';
}

int Asunto::laskeKulut() const {
    return 200; // Kiinteä kulutus, voit muuttaa tätä tarvittaessa
}

int Asunto::getAsukkaat() const {
    return asukkaat;
}

int Asunto::getNeliot() const {
    return neliot;
}
