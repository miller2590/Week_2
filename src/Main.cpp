#include "../include/Car.h"
#include "../include/SportsCar.h"
#include "../include/Truck.h"

int main() {

    class SportsCar charger("Charger", "Dodge", 1979, 190, 3.2);
    class Truck mack("Mack", 500, 600);

    charger.displayInfo();
    mack.displayInfo();

    return 0;
}