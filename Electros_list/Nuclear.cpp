#include "Electros.h"
#include <iostream>
using namespace std;

class Region; 

Nuclear::Nuclear(string name, int power, string owner, string region_name) {
    this->name = name;
    this->power = power;
    this->owner = owner;
    this->region_name = region_name;

    fuel = 3;
    type_fuel = "Уран";
}
void Nuclear::GetPower() {
    cout << power << power_name << endl;
}
void Nuclear::GetRegion() {
    cout << region << endl;
}
void Nuclear::GetOwner() {
    cout << owner << endl;
}
void Nuclear::GetFuel() {
    cout << type_fuel << endl;
}
void Nuclear::GetName() {
    cout << name << endl;
}
void Nuclear::AddRegion(Region* region) {
    this->region = region;
}