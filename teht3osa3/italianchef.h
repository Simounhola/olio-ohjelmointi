#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H

#include <iostream>
#include <string>

class Chef {
public:
    Chef(const std::string& name);
    ~Chef();
    void printName() const;
    void cookSoup() const;
    void makeSalad() const;

protected:
    std::string name;
};

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& name, int jauhot, int vesi);
    ~ItalianChef();
    void makePasta();
    void useIngredients();

private:
    int jauhot;
    int vesi;
};

#endif
