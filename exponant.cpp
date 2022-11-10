// Copyright(c) 2022 Lucas LeBlanc All rights reserved.
//
// Created by : Lucas LeBlanc
// Created on : Nov 2022
// ICS3U-Unit4-03.cpp File,
// learning for... statement in C++.

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string inputNumber;
    float numberAsFloat;
    int numberAsInt;
    int counter;

    // input
    std::cout << "Input a positive integer: ";
    std::cin >> inputNumber;

    // process and output
    std::cout << "\n";
    try {
        numberAsInt = std::stoi(inputNumber);
        numberAsFloat = std::stof(inputNumber);
        if (numberAsInt < 0 || numberAsFloat != numberAsInt) {
            std::cout << "This is not a positive.";
        } else {
            for (counter = 0; counter <= numberAsInt; counter++) {
                std::cout << counter << "² = " << pow(counter, 2) << "\n";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input,"
                  << " please try again following the requirements";
    }

    std::cout << "\n\nDone.\n";
}
