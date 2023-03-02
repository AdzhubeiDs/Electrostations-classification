// наследование.1.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

class Electros {
protected:
    int power;
    string region;
    string owner;
    int fuel;
    string type_fuel;

public:
    Electros() {
        cout << "Electros created" << endl;
    }
    virtual void GetPower() {
        cout << "no" << endl;
    }
    virtual void GetRegion() {
        cout << "no" << endl;
    }
    virtual void GetOwner() {
        cout << "no" << endl;
    }
    virtual void GetFuel() {
        cout << "no" << endl;
    }

};

