/**
 * @file Truck.h
 * Declarations for the Truck class.
 *
 * This file contains the class declaration for Truck, which provides a set of
 * functions for performing mutations and overloading constructors on an inherited class.
 * 
 * @note See Truck.cpp for function comments.
 *
 * @author Gage Miller
 */

#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"


class Truck : public Car {
    private:
        double cargoSize;
        double maxCargoWeight;

    public:
        Truck(); //Default constructor
        Truck(string model, double cargoSize, double maxCargoWeight); //Overloaded constructor
        void displayInfo();

        void setCargoSize(double newCargoSize);

        void setMaxCargoWeight(double newMaxCargoWeight);

};


#endif