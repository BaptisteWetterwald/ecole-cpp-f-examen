//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_REPTILE_H
#define ECOLE_CPP_F_EXAMEN_REPTILE_H

#include "Animal.h"

using namespace std;

class Reptile : public Animal {
private:
    string scalePattern;

public:
    Reptile();
    Reptile(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt, const string& scale);
    Reptile(const Reptile& other);

    string getScalePattern() const;
    void setScalePattern(const string& scale);

    // Override de la fonction printInfo
    void printInfo() const override;
    string getType() const override;
};

#endif //ECOLE_CPP_F_EXAMEN_REPTILE_H
