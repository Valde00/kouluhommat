#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef {
private:
    const std::string password = "pizza";
    int flour;
    int water;
    int makePizza();
public:
    ItalianChef(std::string name);
    ~ItalianChef();
    bool askSecret(std::string attempt, int flour, int water);
};

#endif
