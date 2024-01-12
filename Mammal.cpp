//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include "Mammal.h"
#include <iostream>

using namespace std;

Mammal::Mammal() : Animal(), furColor("Unknown") {}

Mammal::Mammal(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt, const string& fur)
        : Animal(n, c, d, h, s, pet, a, w, hgt), furColor(fur) {}

Mammal::Mammal(const Mammal& other) : Animal(other), furColor(other.furColor) {}

string Mammal::getFurColor() const { return furColor; }

void Mammal::setFurColor(const string& fur) { furColor = fur; }

void Mammal::printInfo() const {
    Animal::printInfo();
    cout << "Fur color: " << furColor << endl;
}

string Mammal::getType() const {
    return "Mammal";
}
