#include "Diesel.h"
#include <iostream>
using namespace std;

class Region;

Diesel::Diesel(string name,int power,string owner,string region_name){
        this -> name = name;
        this -> power = power;
        this -> owner = owner;
        this -> region = region_name;
        fuel = 7;
        type_fuel = "Дизельное топлево";
};
void Diesel::AddRegion(Region* region){
    this->region = region;
}
void Diesel::GetPower(){
    cout<<power<<power_name<<endl;
}
void Diesel::GetRegion(){
    cout<<region<<endl;
}
void Diesel::GetOwner(){
    cout<<owner<<endl; 
}
void Diesel::GetFuel(){
    cout<<type_fuel<<endl;
}
void Diesel::GetName(){
    cout<<name<<endl;
}
