// kerros.h
#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

class Kerros {
public:
    Kerros();
    ~Kerros(); // Lisätty destruktori vapauttamaan varattu muisti
    void maaritaAsunnot();
    int maaritaKerroksenAsukkaatJaNeliot() const;

private:
    Asunto *asunnot; // Käytetään pointteria
};

#endif // KERROS_H
