﻿#pragma once

#include <iostream>
#include "Electros.h"

class Thermal : public Electros {
public:
    Thermal() {
        cout << "Thermal created" << endl;
        fuel = 1;
        type_fuel = "Мазут";
    }
};


class Nuclear : public Electros {
public:
    Nuclear() {
        cout << "Nuclear created" << endl;
        fuel = 3;
        type_fuel = "Уран";
    }
};


class Solar : public Electros {
public:
    Solar() {
        cout << "Solar created" << endl;
        fuel = 2;
        type_fuel = "Солнечная энергия";
    }
};

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
