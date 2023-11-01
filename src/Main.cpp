#include "../include/Car.h"
#include "../include/SportsCar.h"

int main() {

    class Car poop("honda", "mustang", 1992);
    class SportsCar fast("Dodge", "Charger", 1979, 190, 3.2);

    poop.displayCarInfo();
    fast.displayCarInfo();

    return 0;
}