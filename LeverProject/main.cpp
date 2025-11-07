/*
C:\msys64\ucrt64\bin\x86_64-w64-mingw32-g++.exe main.cpp lever_model.cpp -o lever_program.exe -mconsole
.\lever_program.exe
*/
#include "lever_model.h"
#include <iostream>

int main() {
    char choice;

    std::cout << "Lever Mass Ratio Program (Constant Coefficient)\n";
    std::cout << "Select mode: Train (T) / Predict (P): ";
    std::cin >> choice;

    switch (choice) {
        case 'T':
        case 't':
            train();
            break;
        case 'P':
        case 'p': {
            double rotations;
            std::cout << "Enter number of rotations: ";
            std::cin >> rotations;
            double ratio = predict(rotations);
            std::cout << "Predicted ratio: " << ratio << "\n";
            break;
        }
        default:
            std::cout << "Invalid selection.\n";
    }

    return 0;
}