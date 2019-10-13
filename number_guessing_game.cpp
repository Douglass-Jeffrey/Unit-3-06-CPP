// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program runs the secret number game in C++

#include <iostream>
#include <string>

main() {
    // this function checks user inputted number is the same as the computers
    // variables
    int intusernumber;
    int randomnumber = rand() % 3 + 1;
    std::string usernumber;

    // input
    std::cout << "\nGuess the number: " << std::endl;
    std::cin >> usernumber;

    // process
    try {
        intusernumber = std::stoi(usernumber);
        if (intusernumber == randomnumber) {
            // output
            std::cout << "You got the right answer!!!";
        } else {
            std::cout << "You the answer wrong. It was " << randomnumber;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please input an integer number";
    }
}
