#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>

class Asunto {
public:
    Asunto();
    ~Asunto();
    void maaritaAsukkaatJaNeliot() const;
    int laskeKulut() const;

private:
    int getAsukkaat() const;
    int getNeliot() const;

private:
    int asukkaat;
    int neliot;
};

#endif
