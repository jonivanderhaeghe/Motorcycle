#include <iostream>
#include "motorcycle.h"
#include "engine.h"
using namespace std;
int main(){

Motorcycle honda("empty", 0, 0, "empty" );

honda.set_brand("heli");
honda.set_maxSpeed(7);
honda.set_manufacturingYear(1938);
honda.set_model("XOXO");
cout << honda.to_string() << endl;

Engine bmw("empty");

bmw.set_serialNumber("123ZIEJIJWATIKZIE");
bmw.set_numberOfCilinders(20);
bmw.set_capacity(200);
cout << bmw.to_string() << endl;
}


