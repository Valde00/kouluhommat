#include "Pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili(std::string owner) : omistaja(owner), saldo(1000) {
    std::cout << "Pankkitili luotu " << omistaja << std::endl;
}

Pankkitili::~Pankkitili(){}

bool Pankkitili::deposit(double amount) {
    if(amount <= 0) {
        std::cout << "Pankkitili: et voi tallettaa negatiivista summaa\n";
        return false;
    }
    std::cout << "Pankkitili: talletus summalla " << amount << " tehty\n";
    saldo += amount;
    return true;
}

bool Pankkitili::withdraw(double amount) {
    if(amount <= 0 || amount > saldo) {
        return false;
    }
    return true;
}

double Pankkitili::getBalance() const {
    return saldo;
}
