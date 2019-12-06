// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Dec 2019
// This program displays 10 random number with the array

#include <iostream>
#include <cstdlib>
#include <ctime>


main() {
    // this function uses an array

    int randomNumbers[10];
    int aNumber;
    int total = 0;
    float average;

    std::cout << "The random numbers:" << std::endl;
    srand((unsigned int)time(NULL));

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aNumber = (rand() % 100) + 1;
        randomNumbers[loop_counter] = aNumber;
        std::cout << randomNumbers[loop_counter] << " ";
        total += randomNumbers[loop_counter];
    }

    average = total / 10.0;
    std::cout << "" << std::endl;
    std::cout << "The average of those numbers is " << average << std::endl;
}
