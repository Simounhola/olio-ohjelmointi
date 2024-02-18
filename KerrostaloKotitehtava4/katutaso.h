#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"

class Katutaso : public Kerros {
public:
    Katutaso();
    void maaritaKatutaso();
    int maaritaKerroksenAsukkaatJaNeliot() const ;

private:
    Asunto asunnot[2];
};

#endif // KATUTASO_H
