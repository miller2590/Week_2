#include "../include/SportsCar.h"
#include <iostream>

using std::cout;
using std::endl;

SportsCar::SportsCar(string make, string model, int year, int topSpeed, double zeroToSixty)
 : Car(make, model, year), topSpeed(topSpeed), zeroToSixty(zeroToSixty) {};

 void SportsCar::displayCarInfo() {
    Car::displayCarInfo();
    cout << "Top Speed: " << topSpeed << "\n";
    cout << "Zero to Sixty: " << zeroToSixty << endl;
 };