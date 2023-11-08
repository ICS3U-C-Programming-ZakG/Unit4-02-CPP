// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 8, 2023
// This program gets a number from the user and will use a
// while loop to calculate the total sum from 0 to the inputted number.

#include <iostream>
#include <string>

int main() {
    // introduce program to user
    std::cout << "This program gets a number from the user and will ";
    std::cout << "tell them the factorial of it.\n";

    // declare variables
    int userNumInt;
    float userFloat;
    int factorial = 1;
    int counter = 0;
    std::string userNumStr;

    // get user input
    std::cout << "Please enter a positive integer: ";
    std::cin >> userNumStr;

    // try converting string input to integer
    try {
        userNumInt = std::stoi(userNumStr);

        // cast user input string to a float
        userFloat = std::stof(userNumStr);

        if (userNumInt != userFloat) {

            // tell user they cannot enter a decimal
            std::cout << "" << userFloat << " is not an integer\n";

            // check if user input is a negative
        } else if (userNumInt < 0) {

            // tell user if they inputted negative number
            std::cout << "" << userNumInt << " is an invalid input ";
            std::cout << "it must be a positive integer\n ";
        } else {

            // do..while loop
            do {

                // add 1 to the counter
                counter++;

                // do factorial multiplied by counter
                factorial = factorial * counter;

                // display tracking through loop
                std::cout << "tracking " << counter;
                std::cout << " times through the loop\n";

                // check if counter is less than or equal to user number to loop
            } while (counter < userNumInt);

            // tell user the factorial of their number
            std::cout << "The factorial of " << userNumInt;
            std::cout << " is " << factorial << "\n";
        }

        // catch invalid inputs
    } catch (std::invalid_argument) {
        std::cout << "" << userNumStr << " is not a positive integer.\n";
    }
}
