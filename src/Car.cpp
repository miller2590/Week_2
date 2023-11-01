#include "../include/Car.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Car::Car(){};
Car::Car(string model) : model(model){};
Car::Car(string model, string make, int year)
: model(model), make(make), year(year) {};

void Car::displayInfo() {
        cout << "Make: " << make << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << endl;
    };