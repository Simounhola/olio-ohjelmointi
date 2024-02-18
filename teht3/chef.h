#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
public:
    Chef(const std::string& name);

    ~Chef();

    void makeSoup() const;

    void makeSalad() const;

private:
    std::string chefName;
};

#endif // CHEF_H
