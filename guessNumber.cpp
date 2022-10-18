// Copyright (c) 2022 Kyanh Pham
// Created on: Oct 2022
// This program checks if you guess the right number

#include <iostream>
#include <random>

int main() {
    // This function sees if you guessed right or wrong

    int guessedNumber;
    int randomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // Input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> guessedNumber;
    std::cout << std::endl;

    // Process and Output
    if (guessedNumber == randomNumber) {
        std::cout << "You guessed right";
    } else {
        std::cout << "You guessed wrong, the number was " << ""
         << randomNumber << "" << std::endl;
    }
    std::cout << "\nDone.";
}
