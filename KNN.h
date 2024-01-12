//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_KNN_H
#define ECOLE_CPP_F_EXAMEN_KNN_H

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#include <vector>
#include <cmath>

template <typename T>
class KNN {
private:
    int k;

protected:
    virtual double similarityMeasure(T& a, T& b) const = 0;

public:
    KNN() : k(0) {}
    KNN(int kValue) : k(kValue) {}

    int getK() const {
        return k;
    }

    std::vector<int> findNearestNeighbours(std::vector<T>& trainData, T& target) const {
        std::vector<int> neighbors;

        // Utiliser un tableau de paires pour stocker l'index et la similarité
        std::vector<std::pair<int, double>> distances;

        // Calculer la similarité entre la cible et chaque élément du tableau
        for (int i = 0; i < trainData.size(); ++i) {
            double similarity = similarityMeasure(trainData[i], target);
            distances.emplace_back(i, similarity);
        }

        // Trier le tableau en fonction de la similarité (ordre croissant)
        std::sort(distances.begin(), distances.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });

        // Garder les k plus proches voisins
        for (int i = 0; i < k && i < distances.size(); ++i) {
            neighbors.push_back(distances[i].first);
        }

        return neighbors;
    }
};
#endif //ECOLE_CPP_F_EXAMEN_KNN_H
