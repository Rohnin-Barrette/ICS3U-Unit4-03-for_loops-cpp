// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// This program factorial of an inputted positive integer

#include <iostream>
#include <string>

int main() {
    // this program squares all the numbers leadiong up to and including the
    // inputted number.
    int counter = 1;
    int answer = 1;
    std::string user_string;
    int user_number;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter a POSITIVE integer that is >= 0: ";
    std::cin >> user_string;
    std::cout << "" << std::endl;

    // process
    try {
        user_number = std::stoi(user_string);
        if (user_string.find_first_of(".") != std::string::npos) {
            std::cout << "Invalid input" <<std:: endl;
        } else {
            if (user_number >= 0) {
                for (counter = 0; counter <= user_number; counter++) {
                    answer = counter * counter;
                    std::cout << counter << "² = " << answer << std::endl;
                }
            } else {
                std::cout << "Please enter a positive integer." << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
