//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include "Reptile.h"
#include <iostream>

using namespace std;

Reptile::Reptile() : Animal(), scalePattern("Triangle") {}

Reptile::Reptile(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt, const string& scale)
        : Animal(n, c, d, h, s, pet, a, w, hgt), scalePattern(scale) {}

Reptile::Reptile(const Reptile& other) : Animal(other), scalePattern(other.scalePattern) {}

string Reptile::getScalePattern() const { return scalePattern; }

void Reptile::setScalePattern(const string& scale) { scalePattern = scale; }

void Reptile::printInfo() const {
    Animal::printInfo();
    cout << "Scale pattern: " << scalePattern << endl;
}

string Reptile::getType() const {
    return "Reptile";
}
