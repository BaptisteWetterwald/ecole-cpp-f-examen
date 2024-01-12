//
// Created by Baptiste WETTERWALD on 12/01/2024.
//

#include "KNNString.h"

using namespace std;

// copied from https://www.geeksforgeeks.org/introduction-to-levenshtein-distance/
int levenshteinFullMatrix(const string& str1,
                          const string& str2)
{
    int m = str1.length();
    int n = str2.length();

    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; i++) {
        dp[i][0] = i;
    }

    for (int j = 0; j <= n; j++) {
        dp[0][j] = j;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = 1
                           + min(

                        // Insert
                        dp[i][j - 1],
                        min(

                                // Remove
                                dp[i - 1][j],

                                // Replace
                                dp[i - 1][j - 1]));
            }
        }
    }

    return dp[m][n];
}

double KNNString::similarityMeasure(vector<string>& a, vector<string>& b) const {
    // use levenshtein distance to compute similarity
    // calculate the distance for each pair of strings (based on index)
    // then average the distances

    double sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += levenshteinFullMatrix(a[i], b[i]);
    }
    return sum / a.size();
}
