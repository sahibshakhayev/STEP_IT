#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Item
{
public:
    Item(const string& name, const string& own, const string& nphone, const string& bus, const string& category) :
        firm_name(name), owner(own), phone(nphone), busines(bus), category(category) {
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
    string GetCategory() const {
        return category.c_str();
    }

private:
    string firm_name;
    string owner;
    string phone;
    string busines;
    string category;
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
                << it->GetCategory() << "\n"
                << endl;
        
        }
     
        

    }

    void save_to_file(const string filename) {

        ofstream fout(filename, ios::out | ios::binary);
        if (fout.is_open()) fout.write((char*)&items[0], items.size() * sizeof(Item));
        fout.close();

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