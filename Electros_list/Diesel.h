#ifndef MAIN_CPP_DIESEL_H
#define MAIN_CPP_DIESEL_H
#include <string>
#include <iostream>
#include "Electros.h"

class Diesel: public Electros{
public:
    Diesel(string name,int power,string owner,string region_name);
};

#endif //MAIN_CPP_DIESEL_H
