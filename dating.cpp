// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 26th Oct,2026
// This program asks the userfor an age number
// as a string and casts it into an integer and
// displays if the grand parents approve or not

#include <iostream>

int main() {
// declare variables
int age;
const int MIN_AGE = 25;
const int MAX_AGE = 40;

// get the age from the user
std::cout << "Enter your age: ";
std::cin >> age;
std::cout << "You entered: " << age << std::endl;

// cast the string into an integer
try {
    age = std::stoi(input);

    // check if the age is valid
    if (age < MIN_AGE || age > MAX_AGE) {
        throw std::out_of_range
        ("Invalid input.Please enter an age between 25 and 40.");
    } else if (age >= MIN_AGE && age <= MAX_AGE) {
        std::cout << "Your grandparents approve." << std::endl;
    } else {
        std::cout << "Your grandparents do not approve." << std::endl;
    }
} catch (const std::out_of_range) {
    std::cout << "Invalid input. Please enter an age between 25 and 40."
     << std::endl;
}   catch (const std::invalid_argument) {
    std::cout <<
    "Invalid input.Please enter a valid number." << std::endl;
}

    return 0;
}
