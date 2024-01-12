//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_KNNDOUBLE_H
#define ECOLE_CPP_F_EXAMEN_KNNDOUBLE_H

#include <cmath>
#include <utility>
#include "KNN.h"

using namespace std;

class KNNDouble : public KNN<pair<double, double>> {
protected:
    double similarityMeasure(pair<double, double>& a, pair<double, double>& b) const override;

public:
    using KNN<pair<double, double>>::KNN;
};

#endif //ECOLE_CPP_F_EXAMEN_KNNDOUBLE_H
