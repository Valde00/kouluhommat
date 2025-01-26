#include "chef.h"
#include <iostream>

Chef::Chef(std::string name) : chefName(name) {
    std::cout << "Chef " << chefName << " created.\n";
}
Chef::~Chef() {
    std::cout << "Chef " << chefName << " destroyed.\n";
}

std::string Chef::getName() const {
    return chefName;
}

int Chef::makeSalad(int ingredients) const {
    int servings = ingredients / 5;
    std::cout << "Chef " << chefName << " with " << ingredients << " items made " << servings << " servings of salad.\n";
    return servings;
}
int Chef::makeSoup(int ingredients) const {
    int servings = ingredients / 3;
    std::cout << "Chef " << chefName << " with " << ingredients << " items made " << servings << " servings of soup.\n";
    return servings;
}
