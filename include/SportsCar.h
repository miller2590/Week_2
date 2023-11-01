#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
    private:
        int topSpeed;
        double zeroToSixty;
    public:
        SportsCar(string make, string model, int year, int topSpeed, double zeroToSixty);
        void displayCarInfo();
};

#endif