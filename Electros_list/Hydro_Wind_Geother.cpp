#include <iostream>
#include "Electros.h"
#include "Types.h"
using namespace std;

class Say_Shuh: public Hydro{
public:
    Say_Shuh(){
        power = 6400;
        owner = "РусГидро";
        region = "Хакассия";
        river = "Енисей";
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
    void GetFuel(){
        cout<<type_fuel<<endl;
    }
    void GetRiver(){
        cout<<river<<endl;
    }

};

class Bratskay: public Hydro{
public:
//    Bratskay(int power,string owner, string region, string river){
//        this -> power = power;
//        this -> owner = owner;
//        this -> region = region;
//        this -> river = river;
//    }
    Bratskay(){
        power = 4500;
        owner = "ЕвроСибЭнерго";
        region = "Иркутская обл";
        river = "Ангара";
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
    void GetFuel(){
        cout<<type_fuel<<endl;
    }
    void GetRiver(){
        cout<<river<<endl;
    }

};
//Electros* hydro[3];
//hydro[0] = new Hydro(6400, "Русгидро", "Хакассия", "Енисей");

class Kochub: public Wind{
public:
    Kochub(){
        power = 210;
        owner = "Росатом";
        region = "Ставропольстий край";
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
    void GetFuel(){
        cout<<type_fuel<<endl;
    }

};

class Kolskaya: public Wind{
public:
    Kolskaya(){
        power = 201;
        owner = "Энел Россия";
        region = "Мурманская обл";
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
    void GetFuel(){
        cout<<type_fuel<<endl;
    }

};

class Mendeley: public Geother{
public:
    Mendeley(){
        power = 7.4;
        owner = "АО Мобильные ГТЭС";
        region = "Сахалинская обл";
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
    void GetFuel(){
        cout<<type_fuel<<endl;
    }
};

class Pauzhet: public Geother{
public:
    Pauzhet (){
        power = 17;
        owner = "ПАО Камчатскэнерго";
        region = "Камчатка";
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
    void GetFuel(){
        cout<<type_fuel<<endl;
    }
};
