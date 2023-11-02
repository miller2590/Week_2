/**
 * @file Car.cpp
 *
 * This file contains the implementation of the Car class methods. The Car class represents
 * a generic vehicle and provides functionality to set and retrieve its attributes, such as
 * make, model, and year. It also includes a display method to print the information about
 * the car to the console.
 *
 * @author Gage Miller
 */

#include "../include/Car.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

//Default Constructor for Car class
Car::Car(){};

//Overload constructor #1 which allows for a model to be entered
Car::Car(string model) : model(model){};

//Overload constructor #2 which allows for model, make, and year to be entered
Car::Car(string model, string make, int year)
: model(model), make(make), year(year) {};

//Method for displaying car info
void Car::displayInfo() {
        cout << "Make: " << make << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << endl;
    };

//Setter for the Car make
void Car::setMake(string newMake) {
        make = newMake;
    }

//Setter for the Car model
void Car::setModel(string newModel) {
    model = newModel;
}

//Setter for the car year
void Car::setYear(int newYear) {
    year = newYear;
}
