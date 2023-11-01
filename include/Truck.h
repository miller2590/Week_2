#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"


class Truck : public Car {
    private:
        double cargoSize;
        double maxCargoWeight;

    public:
        Truck(string model, double cargoSize, double maxCargoWeight);
        void displayInfo();

};


#endif