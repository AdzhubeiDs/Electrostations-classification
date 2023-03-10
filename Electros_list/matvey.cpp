#include <iostream>
#include "Electros.h"
#include "Tupes_matvey.h"
#include "Region.h"
#include "construct.h"
using namespace std;

void matv(){
    russia.region_arr[0] = new Region("Хакассия", 0, NULL);
    russia.region_arr[1] = new Region("Иркутская обл", 0, NULL);
    russia.region_arr[2] = new Region("Ставропольская обл", 0, NULL);
    russia.region_arr[3] = new Region("Мурманская обл", 0, NULL);
    russia.region_arr[4] = new Region("Сахалинская обл", 0, NULL);
    russia.region_arr[5] = new Region("Камчатский край", 0, NULL);
    russia.region_arr[6] = new Region("Ямало-Ненецкий АО", 0, NULL);
    russia.region_arr[7] = new Region("Карелия", 0, NULL);
    russia.region_arr[8] = new Region("Белгородская обл", 0, NULL);
    russia.region_arr[9] = new Region("Вологодская обл", 0, NULL);
    russia.region_arr[10] = new Region("Ростовская обл", 0, NULL);
    russia.region_arr[11] = new Region("Камчатский край", 0, NULL);
    russia.region_arr[12] = new Region("Калмыкия", 0, NULL);
    russia.region_arr[13] = new Region("Самарская обл", 0, NULL);

    russia.region_arr[0]->size = 2; russia.region_arr[0]->region_arr = new Region* [2]{russia.region_arr[1], russia.region_arr[4]};
    russia.region_arr[1]->size = 3; russia.region_arr[1]->region_arr = new Region* [3]{russia.region_arr[0], russia.region_arr[5], russia.region_arr[2]};
    russia.region_arr[2]->size = 4; russia.region_arr[2]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[5], russia.region_arr[6], russia.region_arr[3]};
    russia.region_arr[3]->size = 3; russia.region_arr[3]->region_arr = new Region* [3]{russia.region_arr[2], russia.region_arr[6], russia.region_arr[7]};
    russia.region_arr[4]->size = 2; russia.region_arr[4]->region_arr = new Region* [2]{russia.region_arr[0], russia.region_arr[8]};
    russia.region_arr[5]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};

    russia.region_arr[6]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};
    russia.region_arr[7]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};
    russia.region_arr[8]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};
    russia.region_arr[9]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};
    russia.region_arr[10]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};
    russia.region_arr[11]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};
    russia.region_arr[12]->size = 4; russia.region_arr[5]->region_arr = new Region* [4]{russia.region_arr[1], russia.region_arr[2], russia.region_arr[6], russia.region_arr[9]};


//    Electros2*** all_types = new Electros2 **[3];
//    Electros2** hydro = new Electros2 *[2];
//    hydro[0] = new Hydro("Саяно Шушенская", 6400, "Русгидро", "Хакассия", "Енисей");
//    hydro[1] = new Hydro("Братская", 4500, "ЕвроСибЭнерго", "Иркутская обл", "Ангара");
//    Electros2** wind = new Electros2 *[2];
//    wind[0] = new Wind("Кочубейская", 210, "Росатом", "Ставропольстий край");
//    wind[1] = new Wind("Кольская", 201, "Энел Россия", "Мурманская обл");
//    Electros2** geoth = new Electros2 *[2];
//    geoth[0] = new Geother( "Менделеевская", 7.4, "АО Мобильные ГТЭС", "Сахалинская обл");
//    geoth[1] = new Geother("Паужская", 17, "ПАО Камчатскэнерго","Камчатка");
//    all_types[0] = hydro;
//    all_types[1] = wind;
    electros.size = 8;
    electros.arr = new type** [electros.size];
    (*electros.arr[0])->size = 2;
    (*electros.arr[0])->name_type = "гидроэлектростанции";
    (*electros.arr[0])->arr_type =new Electros* [(*electros.arr[0])->size];
    (*electros.arr[0])->arr_type[0] = new Hydro("Саяно Шушенская", 6400, "Русгидро",  "Хакассия", "Енисей");
    (*electros.arr[0])->arr_type[1] = new Hydro("Братская", 4500, "ЕвроСибЭнерго", "Иркутская обл", "Ангара");
    (* (*electros.arr[0])->arr_type[0]).AddRegion(russia.region_arr[0]);
    (* (*electros.arr[0])->arr_type[1]).AddRegion(russia.region_arr[1]);
    russia.region_arr[0]->AddElect(1, new Electros * [1]{(*electros.arr[0])->arr_type[0]});
    russia.region_arr[1]->AddElect(1, new Electros * [1]{(*electros.arr[0])->arr_type[1]});
}


