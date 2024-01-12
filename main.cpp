//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include <iostream>

#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Zoo.h"

using namespace std;

int main() {
    /*Animal dog("Dog", "Rainbow", "Carnivore", "Land", "Bark", true, 3, 7.8, 47.5);
    dog.printInfo();
    dog.makeSound();

    cout << endl;

    Animal whale("Whale", "Blue", "Carnivore", "Sea", "Whistle", false, 12, 1200.0, 1500.0);
    whale.printInfo();
    whale.makeSound();

    cout << endl;

    Mammal dolphin("Dolphin", "Grey", "Carnivore", "Sea", "Whistle", false, 8, 200.0, 250.0, "Grey");
    dolphin.printInfo();
    dolphin.makeSound();

    cout << endl;

    Bird eagle("Eagle", "Brown", "Carnivore", "Land", "Scream", false, 5, 5.0, 50.0, 200.0);
    eagle.printInfo();
    eagle.makeSound();

    cout << endl;

    Reptile snake("Snake", "Green", "Carnivore", "Land", "Hiss", false, 2, 1.0, 1.0, "Diamond");
    snake.printInfo();
    snake.makeSound();*/

    Zoo mulhouse("Mulhouse");
    Animal weirdo("Weirdo", "Transparent", "Carnivore", "Land", "Cries", false, 3, 0.001, 0.001);
    Bird eagle("Deagle", "Brown", "Carnivore", "Land", "Scream", false, 5, 5.0, 50.0, 200.0);
    Mammal whale("Whalita", "Blue", "Carnivore", "Sea", "Whistle", false, 12, 1200.0, 1500.0, "Blue");
    Reptile snake("Snakito", "Green", "Carnivore", "Land", "Hiss", false, 2, 1.0, 1.0, "Diamond");
    Reptile oldSnake("Grandpa Snake", "Green", "Carnivore", "Land", "Hiss", false, 60, 1.0, 1.0, "Diamond");
    cout << "Zoo de " << mulhouse.getName() << endl;
    cout << endl;

    mulhouse.addAnimal(&weirdo);
    mulhouse.addAnimal(&eagle);
    mulhouse.addAnimal(&whale);
    mulhouse.addAnimal(&snake);
    mulhouse.addAnimal(&oldSnake);
    mulhouse.listAnimals();

    mulhouse.removeAnimalByName("Weirdo");
    mulhouse.listAnimals();

    cout << "Average age for mammals: " << mulhouse.averageAgeForType("Mammal") << endl;
    cout << "Average age for birds: " << mulhouse.averageAgeForType("Bird") << endl;
    cout << "Average age for reptiles: " << mulhouse.averageAgeForType("Reptile") << endl;
    cout << "Average age for unknown animals: " << mulhouse.averageAgeForType("Unknown") << endl;



    return 0;
}