/**
 * @file Main.cpp
 * Entry point for the Car program.
 *
 * This file serves as the main entry point for a C++ program that demonstrates
 * various object-oriented programming (OOP) principles. It creates instances of the Car,
 * SportsCar, and Truck classes, sets their attributes, and displays their information.
 * The program showcases OOP concepts such as class inheritance, constructor overloading,
 * and encapsulation.
 *
 * @author Gage Miller
 */

#include "../include/Car.h"
#include "../include/SportsCar.h"
#include "../include/Truck.h"

int main() {
    //SportsCar and Truck object created with overloading constructors
    class SportsCar charger("Charger", "Dodge", 1979, 190, 3.2);
    class Truck mack("Mack", 500, 600);

    //SportsCar object created with mutators
    class SportsCar corvette;
    corvette.setMake("Chevy");
    corvette.setModel("Corvette");
    corvette.setYear(1969);
    corvette.setTopSpeed(205);
    corvette.setZeroToSixty(3.1);

    //Truck object created with mutators
    class Truck kenworth;
    kenworth.setModel("Hauler");
    kenworth.setCargoSize(500);
    kenworth.setMaxCargoWeight(800);

    //Display info for overloaded objects
    charger.displayInfo();
    mack.displayInfo();

    //Display info for mutated objects
    corvette.displayInfo();
    kenworth.displayInfo();

    return 0;
}