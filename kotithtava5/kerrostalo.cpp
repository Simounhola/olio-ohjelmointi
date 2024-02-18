#include "kerrostalo.h"
using namespace std;

Kerrostalo::Kerrostalo() {
    katutaso = new Katutaso;
    kerros2 = new Kerros;
    kerros3 = new Kerros;
    kerros4 = new Kerros;
}

Kerrostalo::~Kerrostalo() {
    delete katutaso;
    delete kerros2;
    delete kerros3;
    delete kerros4;
}

void Kerrostalo::maaritaKerrostalo() const {
    cout << "Kerrostalo luotu." << endl;

    cout << "maaritellaan koko kerrostalon kaikki asunnot" << '\n';

    cout << "maaritetaan 2kpl katutason asuntoja" << '\n';

    int katutasoKulut = katutaso->maaritaKerroksenAsukkaatJaNeliot();
    cout << "maaritellaan 4kpl kerroksen asuntoja " << '\n';

    int kerros2Kulut = kerros2->maaritaKerroksenAsukkaatJaNeliot();
    cout << "maaritellaan 4kpl kerroksen asuntoja " << '\n';

    int kerros3Kulut = kerros3->maaritaKerroksenAsukkaatJaNeliot();
    cout << "maaritellaan 4kpl kerroksen asuntoja " << '\n';
    int kerros4Kulut = kerros4->maaritaKerroksenAsukkaatJaNeliot();

    int kokonaiskulutus = katutasoKulut + kerros2Kulut + kerros3Kulut + kerros4Kulut;

    cout << "Kerrostalon asuntojen sahkonkulutus: " << kokonaiskulutus << " kWh" << '\n';
}
