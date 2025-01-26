#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef {
private:
    std::string chefName;
public:
    Chef(std::string name);
    ~Chef();
    std::string getName() const;
    int makeSalad(int ingredients) const;
    int makeSoup(int ingredients) const;
};

#endif
