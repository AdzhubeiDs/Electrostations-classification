#include "Electros.h"
#include <iostream>
using namespace std;

class Region;

Thermal::Thermal(string name, int power, string owner, string region_name) {
        this->name = "";
        this->power = power;
        this->owner = owner;
        this->region_name = region_name;
        fuel = 1;
        type_fuel = "Мазут";
}
void Thermal::AddRegion(Region* region) {
    this->region = region;
}
void Thermal::GetPower() {
    cout << power << power_name << endl;
}
void Thermal::GetRegion() {
    cout << region << endl;
}
void Thermal::GetOwner() {
    cout << owner << endl;
}
void Thermal::GetFuel() {
    cout << type_fuel << endl;
}
void Thermal::GetName() {
    cout << name << endl;
}