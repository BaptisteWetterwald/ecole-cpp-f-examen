//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include "Zoo.h"
#include "Zoo.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include <iostream>
#include <iomanip>

using namespace std;

int Zoo::MAX_CAPACITY = 10;

Zoo::Zoo() : name("Unnamed") {}
Zoo::Zoo(const std::string& zooName) : name(zooName) {}
Zoo::Zoo(const Zoo& other) : name(other.name), animals(other.animals) {}

std::string Zoo::getName() const { return name; }
void Zoo::setName(const std::string& zooName) { name = zooName; }

void Zoo::listAnimals() const {
    cout << "Animals in the Zoo '" << name << "':" << endl;
    for (const auto& animal : animals) {
        animal->printInfo();
        cout << endl;
    }
}

void Zoo::addAnimal(Animal* newAnimal) {
    if (animals.size() < MAX_CAPACITY) {
        // Utilisation de lower_bound pour maintenir l'ordre alphabétique
        auto it = lower_bound(animals.begin(), animals.end(), newAnimal, [](const Animal* a1, const Animal* a2) {
            return a1->getName() < a2->getName();
        });

        animals.insert(it, newAnimal);
        cout << "Animal '" << newAnimal->getName() << "' added to the Zoo '" << name << "'." << endl;
    } else {
        cout << "The Zoo is at maximum capacity. Cannot add more animals." << endl;
    }
}

int Zoo::searchAnimalByName(const std::string& animalName) const {
    // pour avoir du O(log(n))
    auto it = lower_bound(animals.begin(), animals.end(), animalName, [](const Animal* a, const std::string& name) {
        return a->getName() < name;
    });

    if (it != animals.end() && (*it)->getName() == animalName) {
        return distance(animals.begin(), it);
    } else {
        return -1;
    }
}

void Zoo::removeAnimalByName(const std::string& animalName) {
    int index = searchAnimalByName(animalName);
    if (index != -1) {
        cout << "Animal '" << animalName << "' removed from the Zoo '" << name << "'." << endl;
        animals.erase(animals.begin() + index);
    } else {
        cout << "Animal '" << animalName << "' not found in the Zoo '" << name << "'." << endl;
    }
}

double Zoo::averageAgeForType(const std::string& animalType) const {
    int count = 0;
    double totalAge = 0.0;

    for (const auto& animal : animals) {
        if (dynamic_cast<Mammal*>(animal) && animal->getType() == animalType) {
            totalAge += animal->getAge();
            count++;
        }
        if (dynamic_cast<Bird*>(animal) && animal->getType() == animalType) {
            totalAge += animal->getAge();
            count++;
        }
        if (dynamic_cast<Reptile*>(animal) && animal->getType() == animalType) {
            totalAge += animal->getAge();
            count++;
        }
    }

    return (count > 0) ? (totalAge / count) : 0.0;
}
