#include "Chef.h"
#include "ItalianChef.h"
using namespace std;
int main() {
    ItalianChef italianChefMario("Mario");
    Chef ChefJyrki("Jyrki");


    ChefJyrki.cookSoup();
    italianChefMario.makePasta();
    ChefJyrki.makeSalad();

    return 0;
}
