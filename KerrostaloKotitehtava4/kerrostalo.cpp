// kerrostalo.cpp
#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    katutaso = new Katutaso(); // Varataan Katutaso heapista
    kerros2 = new Kerros(); // Varataan Kerros heapista
    kerros3 = new Kerros(); // Varataan Kerros heapista
    kerros4 = new Kerros(); // Varataan Kerros heapista
    maaritaKerrostalo();
}

Kerrostalo::~Kerrostalo() {
    delete katutaso; // Vapautetaan varattu Katutaso-muisti
    delete kerros2; // Vapautetaan varattu Kerros-muisti
    delete kerros3; // Vapautetaan varattu Kerros-muisti
    delete kerros4; // Vapautetaan varattu Kerros-muisti
}

void Kerrostalo::maaritaKerrostalo() const {
    // Muutokset eivät ole tarpeellisia, käytetään pointtereita normaalisti
}
