#include "chef.h"
#include "italianchef.h"

int main() {
    Chef chef("Gordon");
    chef.makeSalad(15);
    chef.makeSoup(9);

    ItalianChef italianChef("Luigi");
    italianChef.askSecret("pizza", 20, 15);
    italianChef.askSecret("macaroni", 20, 25);

    return 0;
}
