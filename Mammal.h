//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_MAMMAL_H
#define ECOLE_CPP_F_EXAMEN_MAMMAL_H

#include "Animal.h"

using namespace std;

class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt, const string& fur);
    Mammal(const Mammal& other);

    string getFurColor() const;
    void setFurColor(const string& fur);

    // Override de la fonction printInfo
    void printInfo() const override;
    string getType() const override;
};


#endif //ECOLE_CPP_F_EXAMEN_MAMMAL_H
