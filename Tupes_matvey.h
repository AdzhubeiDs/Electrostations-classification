#include <iostream>
#include "Electros.h"
using namespace std;

class Hydro: public Electros {
protected:
    string river;
public:
    Hydro() {
        string type_fuel = "гидроресурс";
        fuel = 5;
    }
//    Hydro(int power,string owner, string region, string river){
//        this -> power = power;
//        this -> owner = owner;
//        this -> region = region;
//        this -> river = river;
    virtual void GetRiver(){}
};

class Wind: public Electros{
public:
    Wind() {
        string type_fuel = "гидроресурс";
        fuel = 5;
    }
};

class Geother: public Electros{
public:
    Geother() {
        string type_fuel = "гидроресурс";
        fuel = 5;
    }
};