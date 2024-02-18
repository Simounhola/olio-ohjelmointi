#include "Chef.h"
using namespace std;
Chef::Chef(const std::string& name) : name(name) {
    std::cout << "Chef " << name << " konstruktori" << '\n';
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori" << '\n';
}

void Chef::printName() const {
    std::cout << "Chef " << name << '\n';
}

void Chef::cookSoup() const {
    std::cout << "Chef " << name << " makes salad" << '\n';
}

void Chef::makeSalad() const {
    std::cout << "Chef " << name << " makes soup" << '\n';
}
