#include "lever_model.h"
#include <iostream>
#include <fstream>
#include <vector>

// For simplicity, use the hardcoded coefficient
double predict(double rotations) {
    return rotations * ROTATION_COEFFICIENT;
}

// The train/save/load functions can remain minimal for now
void train() {
    double rotations, ratio;
    std::ofstream outFile("lever_model.txt", std::ios::app);
    std::cout << "Enter training data (rotations and measured ratio). Type -1 to finish.\n";

    while (true) {
        std::cout << "Rotations: ";
        std::cin >> rotations;
        if (rotations == -1) break;

        std::cout << "Measured ratio: ";
        std::cin >> ratio;

        outFile << rotations << " " << ratio << "\n";
    }

    outFile.close();
    std::cout << "Training data saved.\n";
}

void saveModel() {
    std::cout << "Model is just a constant coefficient, no save needed.\n";
}

bool loadModel() {
    // Always "loads" successfully since we have a constant
    return true;
}