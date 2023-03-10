#ifndef _construct_
#define _construct_
#include <iostream>
#include "Electros.h"
#include "Country.h"
using namespace std;

struct type{
    Electros** arr_type;
    int size;
    string name_type;
};
struct all_types{
    type ***arr;
    int size;
};
void matv();
Country russia(13);
all_types electros;


#endif //MAIN_CPP_CONSTRUCT_H
