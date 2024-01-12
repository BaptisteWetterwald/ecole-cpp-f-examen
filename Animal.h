//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_ANIMAL_H
#define ECOLE_CPP_F_EXAMEN_ANIMAL_H

#include <string>
using namespace std;

class Animal {
private:
    string name;
    string diet;
    string color;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:
    Animal();
    Animal(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double hgt);
    Animal(const Animal& animal);

    // virtual getType()
    virtual string getType() const;
    string getName() const;
    string getColor() const;
    string getDiet() const;
    string getHabitat() const;
    string getSounds() const;
    bool getIsPet() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

    void setName(const std::string& n);
    void setColor(const std::string& c);
    void setDiet(const std::string& d);
    void setHabitat(const std::string& h);
    void setSounds(const std::string& s);
    void setIsPet(bool pet);
    void setAge(int a);
    void setWeight(double w);
    void setHeight(double h);

    void makeSound() const;
    virtual void printInfo() const;
};

#endif //ECOLE_CPP_F_EXAMEN_ANIMAL_H
