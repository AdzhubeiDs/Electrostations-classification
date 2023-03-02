#include <iostream>
using namespace std;

class Electros{
protected:
    float power;
    string region;
    string owner;
    int fuel;
    string type_fuel;
public:
    Electros(){
        cout<< "Electros created" << endl;
    }
    virtual void GetPower(){
        cout<<"хз1"<<endl;
    }
    virtual void GetRegion(){
        cout<<"хз2"<<endl;
    }
    virtual void GetOwner(){
        cout<<"хз3"<<endl;
    }
    virtual void GetFuel(){
        cout<<"хз4"<<endl;
    }

};





