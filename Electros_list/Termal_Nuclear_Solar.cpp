
#include <iostream>
#include "Electros.h"
#include "Types.h"
using namespace std;

class Belgorodskaya : public Thermal {
public:
	Belgorodskaya(){
        power = 60;
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
 
};

class Vologda : public Thermal {
public:
    Vologda() {
        power = 132.1;
        region = "Вологодская область";
        owner = "ПАО 'ТГК - 2'";
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
    
};

class Kolskaya public Nuclear {
public:
    Kolskaya() {
        power = 1840;
        region = "Мурманская область";
        owner = "АО 'Концерн Росэнергоатом'";
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
};

class Rostov : public Nuclear {
public:
    Rostov() {
        power = 4071;
        region = "Ростовская область";
        owner = "АО 'Концерн Росэнергоатом'";
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

};

class Arshanskaya : public Solar {
public:
    Arshanskaya() {
        power = 115.6;
        region = "Республика Калмыкия";
        owner = "ПАО 'ФОРТУМ'";
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
};

class Samara : public Solar {
public:
    Samara() {
        power = 75;
        region = "Самарская область";
        owner = "ООО 'Солар Систем'";
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
};
