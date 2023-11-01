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
    Car();
    Car(string model);
    Car(string model, string make, int year);
    void displayInfo();
};

#endif