//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal() : name("Unknown"), color("Unknown"), diet("Unknown"), habitat("Unknown"), sounds("Unknown"), isPet(false), age(0), weight(0.0), height(0.0) {}

Animal::Animal(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt)
        : name(n), color(c), diet(d), habitat(h), sounds(s), isPet(pet), age(a), weight(w), height(hgt) {}

Animal::Animal(const Animal& other)
        : name(other.name), color(other.color), diet(other.diet), habitat(other.habitat), sounds(other.sounds), isPet(other.isPet), age(other.age), weight(other.weight), height(other.height) {}

std::string Animal::getName() const { return name; }
std::string Animal::getColor() const { return color; }
std::string Animal::getDiet() const { return diet; }
std::string Animal::getHabitat() const { return habitat; }
std::string Animal::getSounds() const { return sounds; }
bool Animal::getIsPet() const { return isPet; }
int Animal::getAge() const { return age; }
double Animal::getWeight() const { return weight; }
double Animal::getHeight() const { return height; }

void Animal::setName(const std::string& n) { name = n; }
void Animal::setColor(const std::string& c) { color = c; }
void Animal::setDiet(const std::string& d) { diet = d; }
void Animal::setHabitat(const std::string& h) { habitat = h; }
void Animal::setSounds(const std::string& s) { sounds = s; }
void Animal::setIsPet(bool pet) { isPet = pet; }
void Animal::setAge(int a) { age = a; }
void Animal::setWeight(double w) { weight = w; }
void Animal::setHeight(double h) { height = h; }

void Animal::makeSound() const {
    cout << sounds << endl;
}

void Animal::printInfo() const {
    cout << "Animal of type " << getType() << ":" << endl;
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Age: " << age << "'s old" << endl;
    cout << "This animal is " << (isPet ? "" : "not ") << "a pet" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " cm" << endl;
}

string Animal::getType() const {
    return "Unknown";
}
