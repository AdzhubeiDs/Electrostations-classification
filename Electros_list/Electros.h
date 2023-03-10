

#ifndef MAIN_CPP_ELECTROS_H
#define MAIN_CPP_ELECTROS_H
#include <string>
using namespace std;

class Region;

class Electros{
protected:
    string name;
    float power;
    region* region;
    string region_name;
    string owner;
    int fuel;
    string type_fuel;
    int size;
    string power_name = "МВт";
public:
    Electros();
    virtual void GetPower();
    virtual void GetRegion();
    virtual void GetOwner();
    virtual void GetFuel();
    virtual void GetName();
    virtual void AddRegion(Region* region);
};


#endif //MAIN_CPP_ELECTROS_H
