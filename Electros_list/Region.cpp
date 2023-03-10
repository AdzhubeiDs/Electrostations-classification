#include "Region.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;

Region::Region(string region_name, int size, Region** region_arr): region_name(region_name), size(size), region_arr(region_arr) {}

void Region::AddElect(int num_of_elect, Electros** elect_in_region){
    this->num_of_elect = num_of_elect;
    this->elect_in_region = elect_in_region;
}
void Region::GetName(){
    cout<<region_name<<endl;
}
void Region::GetNeigh(){
    for (int i=0; i<size; i++)
        cout<<(region_arr[i])->region_name<<endl;
}