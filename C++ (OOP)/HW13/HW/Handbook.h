#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Item
{
public:
    Item(const string& name, const string& own, const string& nphone, const string& bus) :
        firm_name(name), owner(own), phone(nphone), busines(bus) {
    }

    string GetFirmName() const {
        return firm_name.c_str();
    }

    string GetOwnerName() const {
        return owner.c_str();
    }

    string GetPhone() const {
        return phone.c_str();
    }

    string GetBusines() const {
        return busines.c_str();
    }

private:
    string firm_name;
    string owner;
    string phone;
    string busines;
};

class Handbook
{
public:
    void AddItem(const Item& i) {
        items.push_back(i);
    }

    void PrintAll() {
        for (auto it = items.begin(); it != items.end(); ++it) {
            cout << it->GetFirmName() << "\n"
                << it->GetOwnerName() << "\n"
                << it->GetPhone() << "\n"
                << it->GetBusines() << "\n"
                << endl;
        }
    }

    Handbook FindByFirmName(const string& name) {
        Handbook h;
        for (auto it = items.begin(); it != items.end(); ++it)
            if (it->GetFirmName() == name)
                h.AddItem(*it);

        return h;
    }

    Handbook FindByOwner(const string& owner) {
        Handbook h;
        for (auto it = items.begin(); it != items.end(); ++it)
            if (it->GetOwnerName() == owner)
                h.AddItem(*it);

        return h;
    }

    Handbook FindByPhone(const string& phone) {
        Handbook h;
        for (auto it = items.begin(); it != items.end(); ++it)
            if (it->GetPhone() == phone)
                h.AddItem(*it);

        return h;
    }

    Handbook FindByBusines(const string& busines) {
        Handbook h;
        for (auto it = items.begin(); it != items.end(); ++it)
            if (it->GetBusines() == busines)
                h.AddItem(*it);

        return h;
    }

private:
    std::vector<Item> items;
};