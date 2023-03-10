#pragma once
#ifndef MAIN_CPP_SOLAR_H
#define MAIN_CPP_SOLAR_H
#include <iostream>
#include "Electros.h"
//#include "region.h" вам надо будет отключить строчку выше и включить эту
using namespace std;
class Region;

class Solar : public Electros {
public:
    Solar(string name, int power, string owner, string region_name);
    void GetPower();
    void GetRegion();
    void GetOwner();
    void GetFuel();
    void GetName();
    void AddRegion(Region* region);
};
#endif