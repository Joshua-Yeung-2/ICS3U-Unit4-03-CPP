// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to test for loop

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // This function is to test the for loop.
    std::string userInputStr;
    int userInput;
    int sumNumber;

    // input
    std::cout << "Enter a positive integer here: ";
    std::cin >> userInputStr;
    std::cout << "" << std::endl;

    try {
        userInput = std::stoi(userInputStr);
        if (userInput < 0) {
            std::cout << "sorry, this is not a positive number" << std::endl;
        } else {
            for (int loopCounter = 0; loopCounter <= userInput; loopCounter++) {
                sumNumber = pow(loopCounter, 2);
                std::cout << loopCounter << "² = " << sumNumber << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
