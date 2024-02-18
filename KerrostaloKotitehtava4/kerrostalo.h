#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
public:
    Kerrostalo();
    void maaritaKerrostalo() const;

private:
    Katutaso katutaso;
    Kerros kerros2;
    Kerros kerros3;
    Kerros kerros4;

};

#endif // KERROSTALO_H
