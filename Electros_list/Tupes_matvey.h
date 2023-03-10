#ifndef _Tupes_matvey_
#define _Tupes_matvey_
#include <iostream>
#include "Electros.h"
#include "count_region2.h"
//#include "region.h" вам надо будет отключить строчку выше и включить эту
using namespace std;

class Hydro: public Electros {
protected:
    string river;
public:
    Hydro(string name, int power,string owner, string region_name, string river) {
        this->name = name;
        this->power = power;
        this->owner = owner;
        this->river = river;
        this->region_name = region_name;
        fuel = 5;
        type_fuel = "гидроресурс";
    }
    void AddReg(Region* region){
        this->region = region;
    }
    void GetPower(){
        cout<<power<<power_name<<endl;
    }
    void GetRegion(){
        cout<<region<<endl;
    }
    void GetOwner(){
        cout<<owner<<endl;
}
    void GetFuel(){
        cout<<type_fuel<<endl;
    }
    void GetRiver(){
        cout<<river<<endl;
    }
    void GetName(){
        cout<<name<<endl;
    }
};

class Wind: public Electros{
public:
    Wind(string name, int power,string owner, int region, string region_name, int* neighbours) {
        this->name = name;
        this->power = power;
        this->owner = owner;
        this->region = region;
        this->region_name = region_name;
        this->neighbour = neighbours;
        fuel = 4;
        type_fuel = "ветер";
    }
    void GetPower(){
        cout<<power<<power_name<<endl;
    }
    void GetRegion(){
        cout<<region<<endl;
    }
    void GetOwner(){
        cout<<owner<<endl;
    }
    void GetFuel(){
        cout<<type_fuel<<endl;
    }
    void GetName(){
        cout<<name<<endl;
    }
};

class Geother: public Electros{
public:
    Geother(string name, int power,string owner, int region, string region_name, int* neighbours) {
        this->name = name;
        this->power = power;
        this->owner = owner;
        this->region = region;
        this->region_name = region_name;
        this->neighbour = neighbours;
        fuel = 6;
        type_fuel = "подземное тепло";
    }
    void GetPower(){
        cout<<power<<power_name<<endl;
    }
    void GetRegion(){
        cout<<region<<endl;
    }
    void GetOwner(){
        cout<<owner<<endl;
    }
    void GetFuel(){
        cout<<type_fuel<<endl;
    }
    void GetName(){
        cout<<name<<endl;
    }
};

#endif