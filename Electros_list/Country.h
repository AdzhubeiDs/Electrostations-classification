#ifndef MAIN_CPP_COUNTRY_H
#define MAIN_CPP_COUNTRY_H


using namespace std;

class Country;
class Region;
class Electros;

class Country{ //родитель
private:
    int size;

public:
    Country(int size);
    Region* region_arr[13]; //массив с потомками класса neig_region
};



#endif //MAIN_CPP_COUNTRY_H
