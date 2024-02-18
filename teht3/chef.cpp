#include "Chef.h"
#include <iostream>

Chef::Chef(const std::string& name) : chefName(name) {
    std::cout << "Chef " << chefName << " konstruktori" << '\n';
}

Chef::~Chef() {
    std::cout << "Chef " << chefName << " destruktori" << '\n';
}

void Chef::makeSoup() const {
    std::cout << "Chef " << chefName << " makes salad" << '\n';
}

void Chef::makeSalad() const {
    std::cout << "Chef " << chefName << " makes soup" << '\n';
}
