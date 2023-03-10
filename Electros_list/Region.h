
#ifndef MAIN_CPP_REGION_H
#define MAIN_CPP_REGION_H
#include <string>
#include "Country.h"



class Region{
private:
    string region_name;
    int num_of_elect;
    Electros** elect_in_region;

public:
    Region(string region_name, int size, Region** region_arr);
    void AddElect(int num_of_elect, Electros** elect_in_region);
    void GetName();
    void GetNeigh();
    int size;
    Region** region_arr; //массив с указателями на объекты этого же класса из массива region_arr
};


#endif //MAIN_CPP_REGION_H
