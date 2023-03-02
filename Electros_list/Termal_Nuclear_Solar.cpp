// наследование.1.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include "Electros.h"
#include "Types.h"

using namespace std;
/// <summary>
///     int power;
///string region;
///string owner;
///int fuel;
/// </summary>



class Belgorodskaya : public Thermal {
public:
	Belgorodskaya(){
		region = "Белгородская область";
		owner = "ПАО 'Квадра'";
	}
    void GetPower() {
        cout << power << endl;
    }
    void GetRegion() {
        cout << region << endl;
    }
    void GetOwner() {
        cout << owner << endl;
    }
    void GetFuel() {
        cout << fuel << endl;
    }
};



