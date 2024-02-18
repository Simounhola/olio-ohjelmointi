#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

class Kerros {
public:
    Kerros();
    ~Kerros();
    void maaritaAsunnot();
    int maaritaKerroksenAsukkaatJaNeliot() const;

private:
    Asunto* asunnot[4];
};

#endif
