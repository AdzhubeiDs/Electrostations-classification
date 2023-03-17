#include "Tidal.h"
#include <iostream>
using namespace std;

class Region;

Tidal::Tidar(string name, int power,string owner, string region_name){
    this -> name = name;
    this -> power = power;
    this -> owner = owner;
    this -> region = region;
    fuel = 8;
    type_fuel = "Энергия вращения Земли"
};
void Tidal::AddRegion(Region* region){
    this->region = region;
}
void Tidal::GetPower(){
    cout<<power<<power_name<<endl;
}
void Tidal::GetRegion(){
    cout<<region<<endl;
}
void Tidal::GetOwner(){
    cout<<owner<<endl; 
}
void Tidal::GetFuel(){
    cout<<type_fuel<<endl;
}
void Tidal::GetName(){
    cout<<name<<endl;
}
