#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H
#include "Chef.h"
using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& name);
    ~ItalianChef();
    void makePasta() const;
};

#endif
