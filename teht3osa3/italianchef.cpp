#include "ItalianChef.h"

Chef::Chef(const std::string& name) : name(name) {
    std::cout << "Chef " << name << " konstruktori" << '\n';
    std::cout << "Chef " << name << " konstruktori" << '\n';
}

Chef::~Chef() {}

void Chef::printName() const {
    std::cout << "Chef " << name << '\n';
}


ItalianChef::ItalianChef(const std::string& name, int jauhot, int vesi)
    : Chef(name), jauhot(jauhot), vesi(vesi) {

}

ItalianChef::~ItalianChef() {
    std::cout << "Chef " << name << " desktruktori" << '\n';
}

void ItalianChef::makePasta() {
    std::cout << "Chef " << name << " makes pasta with special recipe" << '\n';
}

void ItalianChef::useIngredients() {
    std::cout << "Chef " << name << " users jauhot = " << jauhot << '\n';
    std::cout << "Chef " << name << " users vesi = " << vesi << '\n';
}
