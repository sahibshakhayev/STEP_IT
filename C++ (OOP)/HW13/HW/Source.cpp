#include <iostream>
#include "Handbook.h"


int main() {
    Item test("Sahib Shakhayev MMC", "Sahib Shakhayev", "+994559378819", "Software Developer");
    Item test2("Nadir Balayev MMC", "Sahib Shakhayev", "+994554343555", "Software Developer");
    Handbook d;
    d.AddItem(test);
    d.AddItem(test2);
    d.PrintAll();
    Handbook r = d.FindByFirmName("Sahib Shakhayev MMC");
    r.PrintAll();


    return 0;
}