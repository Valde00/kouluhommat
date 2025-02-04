#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "Pankkitili.h"
#include "luottotili.h"

class Asiakas {
private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
public:
    Asiakas(std::string nimi, double luottoRaja);

    std::string getNimi() const;
    void showSaldo() const;
    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double mount);
    bool tiliSiirto(double amount, Asiakas &vastaanottaja);
};
#endif
