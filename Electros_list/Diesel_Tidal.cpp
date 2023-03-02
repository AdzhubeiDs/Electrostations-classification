//
//  main.cpp
//  Electrostations
//
//  Created by User on 02/03/2023.
//  Copyright © 2023 User. All rights reserved.
//

#include <iostream>
#include "Types.h"
#include <string>
using namespace std;

class Ozernovskaya: public Diesel{
public:
    Ozernovskaya(){
        power = 5.57;
        region = "Дальневосточный ФО";
        owner = "РусГидро";
    }
    void GetPower(){
        cout<<power<<endl;
    }
    void GetRegion(){
        cout<<region<<endl;
    }
    void GetOwner(){
        cout<<owner<<endl;
    }
};

class DES_Valaam: public Diesel{
public:
    DES_Valaam(){
        power = 2;
        region = "Карелия";
        owner = "ПАО 'ТГК-1'";
    }
    void GetPower(){
        cout<<power<<endl;
    }
    void GetRegion(){
        cout<<region<<endl;
    }
    void GetOwner(){
        cout<<owner<<endl;
    }
};

class Pelvozh: public Diesel{
public:
    Pelvozh(){
        power = 0.36;
        region = "Ямало-Ненецкий АО";
        owner = "Салехардэнерго";
    }
    void GetPower(){
        cout<<power<<endl;
    }
    void GetRegion(){
        cout<<region<<endl;
    }
    void GetOwner(){
        cout<<owner<<endl;
    }
};

class Kislogubskaya: public Tidal{
public:
    Kislogubskaya(){
        power = 1.7;
        region = "Мурманская область";
        owner = "Русское море - Аквакультура";
    }
    void GetPower(){
        cout<<power<<endl;
    }
    void GetRegion(){
        cout<<region<<endl;
    }
    void GetOwner(){
        cout<<owner<<endl;
    }
};

