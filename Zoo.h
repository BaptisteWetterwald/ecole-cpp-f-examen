//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_ZOO_H
#define ECOLE_CPP_F_EXAMEN_ZOO_H


#include <string>
#include <vector>
#include <algorithm>
#include "Animal.h"

using namespace std;

class Zoo {
private:
    string name;
    static int MAX_CAPACITY;
    vector<Animal*> animals;

public:
    Zoo();
    Zoo(const string& zooName);
    Zoo(const Zoo& other);

    string getName() const;
    void setName(const string& zooName);

    void listAnimals() const;
    void addAnimal(Animal* newAnimal);
    int searchAnimalByName(const string& animalName) const;
    void removeAnimalByName(const string& animalName);
    double averageAgeForType(const string& animalType) const;

    void predictTypeWithKNN(const Animal* animal, int k, const string& similarityType) const;

};

#endif //ECOLE_CPP_F_EXAMEN_ZOO_H
