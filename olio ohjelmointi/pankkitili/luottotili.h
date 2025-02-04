#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "Pankkitili.h"

class Luottotili : public Pankkitili {
private:
    double saldo;
    double luottoRaja;
public:
    Luottotili(std::string owner, double raja);
    bool withdraw(double amount) override;
    bool deposit(double amount) override;
    bool payCredit(double amount);
};
#endif
