#include "Asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas(string nimi, double luottoRaja) : nimi(nimi), kayttotili(nimi),luottotili(nimi, luottoRaja) {
    cout << "Asiakkuus luotu " << nimi << endl;
}

std::string Asiakas::getNimi() const {
    return nimi;
}
void Asiakas::showSaldo() const {
    cout << endl;
    cout << "[" << nimi << ":n saldot]" << endl;
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
    cout << endl;
}
bool Asiakas::talletus(double amount) {
    return kayttotili.deposit(amount);
}
bool Asiakas::nosto(double amount){
    return kayttotili.withdraw(amount);
}
bool Asiakas::luotonMaksu(double amount) {
    return luottotili.payCredit(amount);
}
bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}
bool Asiakas::tiliSiirto(double amount, Asiakas &vastaanottaja) {
    if(kayttotili.withdraw(amount)) {
        cout << "Pankkitili: " << nimi << " siirtaa " << amount << " " << vastaanottaja.nimi << ":lle" << endl;
        return vastaanottaja.talletus(amount);
    }
    return false;
}
