// Copyright (c) 2021 Abdul Basit All rights reserved
//
// Created by : Abdul Basit
// Created on: Nov 2021
// This program calculates the circumference of the circle
// with user input

#include <iostream>

int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;
    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;
    // process
    circumference = TAU*radius;
    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
}
