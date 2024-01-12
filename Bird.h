//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_BIRD_H
#define ECOLE_CPP_F_EXAMEN_BIRD_H

#include "Animal.h"

using namespace std;

class Bird : public Animal {
private:
    double wingSpan;

public:
    Bird();
    Bird(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt, double wing);
    Bird(const Bird& other);

    double getWingSpan() const;
    void setWingSpan(const double wing);

    // Override de la fonction printInfo
    void printInfo() const override;
    string getType() const override;
};

#endif //ECOLE_CPP_F_EXAMEN_BIRD_H
