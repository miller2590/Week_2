/**
 * @file SportsCar.h
 * Declarations for the SportsCar class.
 *
 * This file contains the class declaration for SportsCar, which provides a set of
 * functions for performing mutations and overloading constructors on an inherited class.
 * 
 * @note See SportsCar.cpp for function comments.
 *
 * @author Gage Miller
 */

#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
    private:
        int topSpeed;
        double zeroToSixty;
    public:
        SportsCar();
        SportsCar(string make, string model, int year, int topSpeed, double zeroToSixty);
        void displayInfo();
        void setTopSpeed(int newTopSpeed);
        void setZeroToSixty(double newZeroToSixty);
};

#endif