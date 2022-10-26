// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: October 24th, 2022
// This program gets the location and air
// quality index from the user, then checks
// to make sure it is a valid input using a
// try... catch statement.Then, the program
// checks to see which category of warning
// the user's inputted air quality index falls
// under, and displays it back to the user along
// with the location of the user
// in a custom message.
#include <string>
#include <iostream>

// this function determines the air quality
// warning based on the air quality index
// the user inputted, along with a custom
// message based on the user's location.
// The program uses if... else if... else,
// nested if statements, and try... catch
// statements to perform all of this.
int main() {
    // initializing variables of userLocation, userIndex,
    // userIndexAsInt.
    std::string userLocation;
    std::string userIndex;
    int userIndexAsInt;

    // introductory text that explains what this program does.
    std::cout << "Hello! Have you heard of the hat man? ";
    std::cout << "The hat man wants to help you! Air can be ";
    std::cout << "dangerous sometimes, so this program, ";
    std::cout << "which is approved and sanctioned by the hat man, ";
    std::cout << "will tell you the advisory for the air quality. ";

    // getting the air quality and location
    // from the user.
    std::cout << "Please input the air quality index for your region ";
    std::cout << "and you will get the hat man’s special ";
    std::cout << "certified air warning :) ";
    std::cin >> userIndex;
    std::cout << "Please input the name of your location. ";
    std::cout << "The hat man desires it :) ";
    std::cin >> userLocation;

    // using a try...catch statement to check if the user inputted
    // a valid integer.
    try {
        // try converting the user index to an int.
        userIndexAsInt = std::stoi(userIndex);
        if (userIndexAsInt >= 0 && userIndexAsInt <= 500) {
            if (userIndexAsInt >= 0 && userIndexAsInt <= 50) {
                std::cout << "The air quality index ";
                std::cout << "for the location '" << userLocation;
                std::cout << "', with the value you entered," << userIndexAsInt;
                std::cout << ", is “Good”. This means it is safe for you ";
                std::cout << "to go outside - air pollution ";
                std::cout << "poses little / no risk.";
            } else if (userIndexAsInt >= 51 && userIndexAsInt <= 100) {
                std::cout << "The air quality index for the ";
                std::cout << "location '" << userLocation;
                std::cout << "', with the value you entered, ";
                std::cout << "'" << userIndexAsInt << "', ";
                std::cout << "is “Moderate”. This means it is still ";
                std::cout << "acceptable to go outside, however there is ";
                std::cout << "a moderate risk for a small ";
                std::cout << "population of people ";
                std::cout << "who are unusually sensitive to air pollution.";
            } else if (userIndexAsInt >= 101 && userIndexAsInt <= 150) {
                std::cout << "The air quality index for the ";
                std::cout << "location '" << userLocation;
                std::cout << "', with the value you entered, ";
                std::cout << "'" << userIndexAsInt << "', ";
                std::cout << "is “Unhealthy For Sensitive Groups”.";
                std::cout << "This means that those in sensitive groups ";
                std::cout << "may have moderate health effects. ";
                std::cout << "The general population is typically ";
                std::cout << "not affected.";
            } else if (userIndexAsInt >= 151 && userIndexAsInt <= 200) {
                std::cout << "The air quality index for the ";
                std::cout << "location '" << userLocation;
                std::cout << "', with the value you entered, ";
                std::cout << "'" << userIndexAsInt << "', ";
                std::cout << "is “Unhealthy”. This means that all members ";
                std::cout << "of the population will start experiencing ";
                std::cout << "mild/moderate health effects, ";
                std::cout << "and those in sensitive ";
                std::cout << "groups may experience severe effects. It is not ";
                std::cout << "advisable to go outside.";
            } else if (userIndexAsInt >= 201 && userIndexAsInt <= 300) {
                std::cout << "The air quality index for the ";
                std::cout << "location '" << userLocation;
                std::cout << "', with the value you entered, ";
                std::cout << "'" << userIndexAsInt << "', ";
                std::cout << "is “Very Unhealthy”. This means ";
                std::cout << "that all members of ";
                std::cout << "the population will experience ";
                std::cout << "moderate / severe health ";
                std::cout << "effects - it is not advisable to go outside.";
            } else if (userIndexAsInt >= 301 && userIndexAsInt <= 500) {
                std::cout << "The air quality index for the ";
                std::cout << "location '" << userLocation;
                std::cout << "', with the value you entered, ";
                std::cout << "'" << userIndexAsInt << "', ";
                std::cout << "is “Hazardous”. This means that ";
                std::cout << "the entire population ";
                std::cout << "is almost surely to be affected - this level is ";
                std::cout << "considered an emergency health warning. It is ";
                std::cout << "not safe to go outside.";
            } else {
                std::cout << "I'm sorry, the value you entered, ";
                std::cout << "(" << userIndexAsInt << ") ";
                std::cout << "is not valid. Please only enter an integer ";
                std::cout << "from 0-500";
            }
        } else {
        std::cout << "I'm sorry, the value you entered, ";
        std::cout << "(" << userIndexAsInt << ") ";
        std::cout << "is not valid. Please only enter an integer ";
        std::cout << "from 0-500";
        }
    } catch (std::invalid_argument) {
        std::cout << "I'm sorry, the value you entered, ";
        std::cout << "(" << userIndexAsInt << ") ";
        std::cout << "is not valid. Please only enter an integer ";
        std::cout << "from 0-500";
    }
    // this line of code acts like the "finally" block in python.
    std::cout << "Regardless of your result, please be safe ";
    std::cout << "and follow all public health advisories for your region. ";
    std::cout << "The hat man thanks you for using this program.";
}
