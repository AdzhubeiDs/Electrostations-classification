#include "Electros.h"
#include <iostream>
using namespace std;

class Region;

Solar::Solar(string name, int power, string owner, string region_name) {
    this->name = name;
    this->power = power;
    this->owner = owner;
    this->region_name = region_name;
    fuel = 2;
    type_fuel = "Солнечная энергия";
}
void Solar::GetPower() {
    cout << power << power_name << endl;
}
void Solar::GetRegion() {
    cout << region << endl;
}
void Solar::GetOwner() {
    cout << owner << endl;
}
void Solar::GetFuel() {
    cout << type_fuel << endl;
}
void Solar::GetName() {
    cout << name << endl;
}
void Solar::AddRegion(Region* region) {
    this->region = region;
}
