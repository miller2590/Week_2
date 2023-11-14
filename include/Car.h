/**
 * @file Car.h
 *
 * This file contains the class declaration for Car, which provides a set of
 * functions for performing mutations and overloading constructors on an a base class.
 * 
 * @note See Car.cpp for function comments
 * @note Updated to include friend function declaration
 * 
 * @author Gage Miller
 */

#ifndef CAR_H
#define CAR_H

#include <string>

using std::string;

class Car{
    protected:
    string make;
    string model;
    int year;

    public:
    //Car constructor declarations
    Car();
    Car(string model);
    Car(string model, string make, int year);

    //Friend function declaration
    void friend displayMakeModel(const Car& car);

    // Display declaration
    void displayInfo();

    //Setter declarations
    void setMake(string newMake);  
    void setModel(string newModel);
    void setYear(int newYear);
};

#endif