/**
 * @file Truck.cpp
 *
 * This file contains the implementation of functions declared in Truck.h.
 * The Truck class allows for various mutation methods and display methods.
 * The Truck class inherits from the Car base class.
 *
 * @author Gage Miller
 */

#include "../include/Truck.h"
#include <iostream>

using std::cout;
using std::endl;

//Default constructor
Truck::Truck(){}; 

//Overload constructor for the Truck class.
Truck::Truck(string model, double cargoSize, double maxCargoWeight) 
: Car(model), cargoSize(cargoSize), maxCargoWeight(maxCargoWeight){};

//Method to display Truck information
void Truck::displayInfo() {
    cout << "Model: " << model << "\n";
    cout << "Cargo Size (Cubic Feet): " << cargoSize << '\n';
    cout << "Max Cargo Weight: " << maxCargoWeight << endl;

}

//Setter for cargo size
void Truck::setCargoSize(double newCargoSize) {
    cargoSize = newCargoSize;
}

//Setter for max cargo weight
void Truck::setMaxCargoWeight(double newMaxCargoWeight) {
    maxCargoWeight = newMaxCargoWeight;
}