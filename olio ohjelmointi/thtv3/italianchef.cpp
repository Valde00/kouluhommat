#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string name) : Chef(name), flour(0), water(0) {
    std::cout << "ItalianChef " << getName() << " created.\n";
}
ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << getName() << " destroyed.\n";
}

bool ItalianChef::askSecret(std::string attempt, int f, int w) {
    if(attempt == password) {
        flour = f;
        water = w;
        std::cout << "Password correct. Ingredients set: flour: " << flour << ", water: " << water << ".\n";
        std::cout << "ItalianChef " << getName() << " with " << flour << " flour and " << water << " water can make ";
        int pizzas = makePizza();
        std::cout << pizzas << " pizzas.\n" << "Making pizza...\n";
        return true;
    } else {
        std::cout << "Password incorrect.\n";
        return false;
    }
}

int ItalianChef::makePizza() {
    int servings = std::min(flour / 5, water / 5);
    //std::cout << "ItalianChef " << getName() << " made " << servings << " pizzas.\n";
    return servings;
}
