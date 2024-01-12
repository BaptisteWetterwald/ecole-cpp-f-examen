//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include "KNNDouble.h"

double KNNDouble::similarityMeasure(std::pair<double, double>& a, std::pair<double, double>& b) const {
    // Distance euclidienne entre les deux animaux
    double diffWeight = a.first - b.first;
    double diffHeight = a.second - b.second;
    return sqrt(diffWeight * diffWeight + diffHeight * diffHeight);
}
