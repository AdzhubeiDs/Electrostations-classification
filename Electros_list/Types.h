#pragma once

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
