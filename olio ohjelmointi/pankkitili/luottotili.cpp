#include "luottotili.h"
#include <iostream>

Luottotili::Luottotili(std::string owner, double raja) : Pankkitili(owner), luottoRaja(raja), saldo(raja) {
    std::cout << "Luottotili luotu " << omistaja << ", luottoraja " << raja << std::endl;
}

bool Luottotili::withdraw(double amount) {
    if(amount <= 0 || (saldo - amount) < -luottoRaja) {
        std::cout << "Luottotili: nosto ei onnistunut\n";
        return false;
    }
    std::cout << "Luottotili: nosto summalla " << amount << " tehty, luottoa jaljella " << (saldo - amount) << std::endl;
    return true;
}
bool Luottotili::payCredit(double amount) {
    if(amount <= 0 || saldo + amount > 0) {
        return false;
    }
    saldo += amount;
    return true;
}
bool Luottotili::deposit(double amount) {
    if(amount > 0 && saldo - amount >= luottoRaja) {
        return true;
        saldo += amount;
    }
    return false;
}
