#include <iostream>
#include "Handbook.h"


int main() {
    Item test("Sahib Shakhayev MMC", "Sahib Shakhayev", "+994512547874", "Software Developer", "Home");
    Item test2("Nadir Balayev MMC", "Sahib Shakhayev", "+994554343555", "Software Developer", "Home");
    Handbook d;
    d.AddItem(test);
    d.AddItem(test2);
    d.PrintAll();
    d.save_to_file("data.dat");
    Handbook r = d.FindByFirmName("Sahib Shakhayev MMC");
    r.PrintAll();


    return 0;
}
