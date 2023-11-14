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
 * @note Updated to impliment friend function from Car class
 * 
 * @author Gage Miller
 */

#include "../include/Car.h"
#include "../include/SportsCar.h"
#include "../include/Truck.h"
#include <memory>

using std::shared_ptr;

int main() {
    //SportsCar and Truck object created with overloading constructors
    class SportsCar* charger = new SportsCar("Charger", "Dodge", 1979, 190, 3.2); //Charger created with pointer
    //Mack created with shared/smart pointer
    shared_ptr<Truck> mack = std::make_shared<Truck>("Mack", 4557, 40000);

    //SportsCar object created with mutators
    class SportsCar corvette;
    corvette.setMake("Chevy");
    corvette.setModel("Corvette");
    corvette.setYear(1969);
    corvette.setTopSpeed(205);
    corvette.setZeroToSixty(3.1);

    //Truck object created with mutators
    class Truck kenworth;
    kenworth.setModel("Kenworth");
    kenworth.setCargoSize(3448);
    kenworth.setMaxCargoWeight(25000);

    //Display info for overloaded/pointer objects
    charger->displayInfo();
    mack->displayInfo();

    //Display info for mutated objects
    corvette.displayInfo();
    kenworth.displayInfo();

    //**Updated** Calling friend function on corvette object
    displayMakeModel(corvette);

    //Charger memory deallocation
    delete charger;

    return 0;
}