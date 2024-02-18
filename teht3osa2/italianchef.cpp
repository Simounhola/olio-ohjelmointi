#include "ItalianChef.h"
using namespace std;
ItalianChef::ItalianChef(const std::string& name) : Chef(name) {
    std::cout << "Chef " << name << " konstruktori" << '\n';
}

ItalianChef::~ItalianChef() {

}

void ItalianChef::makePasta() const {
    std::cout << "Chef Mario";

    std::cout << " makes pasta" << '\n';
}
