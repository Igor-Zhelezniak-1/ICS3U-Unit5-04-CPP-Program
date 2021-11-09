// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program is program

#include <iostream>
#include <cmath>

double volumeCalculator(float radius, float height) {
    // This is function for volume
    int volume;
    volume = pow(radius, 2) * height * M_PI;

    return volume;
}


main() {
    // This is main function

    std::string integer1;
    std::string integer2;
    float radiusFromUser;
    float heightFromUser;
    float calculatedVolume;

    std::cout << "Starting ..." << std::endl;

    std::cout << "" << std::endl;
    std::cout << "This program calculates volume of a cylinder" << std::endl;
    std::cout << "Please enter the radius and height" << std::endl;

    std::cout << "" << std::endl;

    // input
    std::cout << "The radius is: ";
    std::cin >> integer1;
    std::cout << "The height is: ";
    std::cin >> integer2;

    // process
    try {
        radiusFromUser = std::stof(integer1);
        heightFromUser = std::stof(integer2);
        if (radiusFromUser < 0 || heightFromUser < 0) {
            std::cout << "There is no solution" << std::endl;
        } else {
            calculatedVolume = volumeCalculator(radiusFromUser, heightFromUser);
            std::cout << "The volume is cylinder with radius " << radiusFromUser
            << " mm and height " << heightFromUser << " mm is "
            << calculatedVolume << " mm³" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please use numbers" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
