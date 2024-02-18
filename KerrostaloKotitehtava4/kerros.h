#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

class Kerros {
public:
    Kerros();
    void maaritaAsunnot();
    int maaritaKerroksenAsukkaatJaNeliot() const;

protected:
    Asunto asunnot[4];
};

#endif // KERROS_H
