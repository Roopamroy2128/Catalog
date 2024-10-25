#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cmath>
//#include <nlohmann/json.hpp> // JSON library: https://github.com/nlohmann/json
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

// Function to convert a string in any base to an integer
long long decodeValue(const string& value, int base) {
    long long decoded = 0;
    for (char ch : value) {
        int digit = (ch >= '0' && ch <= '9') ? ch - '0' : ch - 'a' + 10;
        decoded = decoded * base + digit;
    }
    return decoded;
}

// Function to perform Lagrange Interpolation to find the constant term `c`
long long findConstantTerm(const vector<pair<int, long long>>& points, int k) {
    long long c = 0;
    for (int i = 0; i < k; ++i) {
        long long xi = points[i].first;
        long long yi = points[i].second;
        long long term = yi;
        
        for (int j = 0; j < k; ++j) {
            if (i != j) {
                long long xj = points[j].first;
                term *= xj;
                term /= (xi - xj);
            }
        }
        c += term;
    }
    return c;
}

int main() {
    // Load JSON from file
    ifstream inputFile("input.json");
    json inputData;
    inputFile >> inputData;

    int n = inputData["keys"]["n"];
    int k = inputData["keys"]["k"];
    
    vector<pair<int, long long>> points;
    
    // Process each root in JSON
    for (auto& item : inputData.items()) {
        if (item.key() != "keys") {
            int x = stoi(item.key());
            int base = stoi(item.value()["base"].get<string>());
            string valueStr = item.value()["value"];
            long long y = decodeValue(valueStr, base);
            points.emplace_back(x, y);
        }
    }

    // Sort points based on x for consistency (optional)
    sort(points.begin(), points.end());

    // Find the constant term c using Lagrange Interpolation
    long long secretC = findConstantTerm(points, k);

    cout << "The secret (constant term c) is: " << secretC << endl;
    return 0;
}
