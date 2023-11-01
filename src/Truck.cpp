#include "../include/Truck.h"
#include <iostream>

using std::cout;
using std::endl;


Truck::Truck(string model, double cargoSize, double maxCargoWeight) 
: Car(model), cargoSize(cargoSize), maxCargoWeight(maxCargoWeight){};

void Truck::displayInfo() {
    cout << "Model: " << model << "\n";
    cout << "Cargo Size (Cubic Feet): " << cargoSize << '\n';
    cout << "Max Cargo Weight: " << maxCargoWeight << endl;

}