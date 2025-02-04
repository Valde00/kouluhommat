#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>

class Pankkitili {
protected:
    std::string omistaja;
    double saldo = 0;
public:
    Pankkitili(std::string owner);
    ~Pankkitili();
    double getBalance() const;
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
};
#endif
