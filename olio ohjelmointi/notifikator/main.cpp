#include <iostream>
#include <string>
using namespace std;

class Seuraaja {
public:
    string nimi;
    Seuraaja* next;

    Seuraaja(string n) : nimi(n), next(nullptr) {
        cout << "Luodaan seuraaja " << nimi << endl;
    }

    string getNimi() { return nimi; }
    void paivitys(string viesti) {
        cout << "Seuraaja " << nimi << " sai viestin " << viesti << endl;
    }
};

class Notifikaattori {
private:
    Seuraaja* seuraajat;
public:
    Notifikaattori() : seuraajat(nullptr) {
        cout << "Luodaan notifikaattori" << endl;
    }

    void lisaa(Seuraaja* s) {
        cout << "Notifikaattori lisaa seuraajan " << s->getNimi() << endl;
        s->next = seuraajat;
        seuraajat = s;
    }

    void poista(Seuraaja* s) {
        cout << "Notifikaattori poistaa seuraajan " << s->getNimi() << endl;
        Seuraaja* nykyinen = seuraajat;
        Seuraaja* edellinen = nullptr;

        while (nykyinen != nullptr) {
            if (nykyinen == s) {
                if (edellinen == nullptr) {
                    seuraajat = nykyinen->next;
                } else {
                    edellinen->next = nykyinen->next;
                }
                return;
            }
            edellinen = nykyinen;
            nykyinen = nykyinen->next;
        }
    }

    void tulosta() {
        cout << "Notifikaattorin seuraajat:" << endl;
        Seuraaja* nykyinen = seuraajat;
        while (nykyinen != nullptr) {
            cout << "Seuraaja " << nykyinen->getNimi() << endl;
            nykyinen = nykyinen->next;
        }
    }

    void postita(string viesti) {
        cout << "Notifikaattori postaa viestin " << viesti << endl;
        Seuraaja* nykyinen = seuraajat;
        while (nykyinen != nullptr) {
            nykyinen->paivitys(viesti);
            nykyinen = nykyinen->next;
        }
    }
};

int main() {
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.tulosta();

    n.postita("Tama on viesti 1");
    n.poista(&b);
    n.postita("Tama on viesti 2");

    return 0;
}
