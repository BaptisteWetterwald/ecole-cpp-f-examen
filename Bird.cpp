//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include "Bird.h"
#include <iostream>

using namespace std;

Bird::Bird() : Animal(), wingSpan(1.0) {}

Bird::Bird(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt, double wing)
        : Animal(n, c, d, h, s, pet, a, w, hgt), wingSpan(wing) {}

Bird::Bird(const Bird& other) : Animal(other), wingSpan(other.wingSpan) {}

double Bird::getWingSpan() const { return wingSpan; }

void Bird::setWingSpan(const double wing) { wingSpan = wing; }

void Bird::printInfo() const {
    Animal::printInfo();
    cout << "Wing span: " << wingSpan << " cm" << endl;
}

string Bird::getType() const {
    return "Bird";
}
