#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>
using namespace std;

class Chef {
public:
    Chef(const std::string& name);
    ~Chef();
    void printName() const;
    void cookSoup() const;
    void makeSalad() const;

private:
    std::string name;
};

#endif
