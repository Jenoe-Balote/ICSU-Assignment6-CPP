// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program calculates that area of a circle

#include <iostream>
#include <cmath>

float CalculateArea(float radiusFromUser) {
    // calculate area
    const double PI = 3.14;
    float radius;
    float area;

    area = PI * pow(radiusFromUser, 2);

    return area;
}


main() {
    std::string stringRadius;
    float radiusFromUser;
    float circleArea;

    // input
    std::cout << "Lets calculate the area of a circle!" << std::endl;
    std::cout << "Enter the radius (cm): ";
    std::cin >> stringRadius;
    std::cout << std::endl;

    // call functions and output
    try {
        radiusFromUser = std::stoi(stringRadius);
        circleArea = CalculateArea(radiusFromUser);
        std::cout << "The area is " << circleArea << " cm²." << std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid." << std::endl;
    }
    std::cout << ""<< std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}
