#ifndef CAR_H
#define CAR_H

#include <string>

using std::string;

class Car{
    private:
    string make;
    string model;
    int year;

    public:
    Car(string make, string model, int year);
    void displayCarInfo();
};

#endif