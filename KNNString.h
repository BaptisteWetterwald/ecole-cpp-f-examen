//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#ifndef ECOLE_CPP_F_EXAMEN_KNNSTRING_H
#define ECOLE_CPP_F_EXAMEN_KNNSTRING_H

using namespace std;

#include <vector>
#include <string>
#include "KNN.h"

class KNNString : public KNN<std::vector<std::string>> {
private:
    int levenshteinRecursive(const std::string& str1, const std::string& str2, int m, int n) const;

protected:
    double similarityMeasure(std::vector<std::string>& a, std::vector<std::string>& b) const override;

public:
    using KNN<std::vector<std::string>>::KNN;
};

#endif //ECOLE_CPP_F_EXAMEN_KNNSTRING_H
