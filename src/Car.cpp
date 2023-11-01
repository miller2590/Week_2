#include "../include/Car.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Car::Car(string make, string model, int year) : make(make), model(model), year(year) {};

void Car::displayCarInfo() {
        cout << "Make: " << make << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << endl;
    };