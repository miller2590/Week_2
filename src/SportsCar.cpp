/**
 * @file SportsCar.cpp
 *
 * This file contains the implementation of functions declared in SportsCar.h.
 * The SportsCar class allows for various mutation methods and display methods.
 * The SportsCar class inherits from the Car base class.
 *
 * @author Gage Miller
 */

#include "../include/SportsCar.h"
#include <iostream>

using std::cout;
using std::endl;

//Default SportsCar constructor
SportsCar::SportsCar(){};

/**
*Overload SportsCar constructor allows for make, model, year, 
*top speed, and 0 to 60 to be entered.
*/
SportsCar::SportsCar(string make, string model, int year, int topSpeed, double zeroToSixty)
 : Car(make, model, year), topSpeed(topSpeed), zeroToSixty(zeroToSixty) {};

//Display method for SportsCar info
void SportsCar::displayInfo() {
    Car::displayInfo();
    cout << "Top Speed: " << topSpeed << "\n";
    cout << "Zero to Sixty: " << zeroToSixty << endl;
};

//Setter for 0 to 60
void SportsCar::setZeroToSixty(double newZeroToSixty) {
    zeroToSixty = newZeroToSixty;
}

//Setter for top speed
void SportsCar::setTopSpeed(int newTopSpeed) {
    topSpeed = newTopSpeed;
}