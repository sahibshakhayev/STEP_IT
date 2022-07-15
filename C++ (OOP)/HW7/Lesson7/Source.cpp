#include <string>
#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
    int age;
    string breed;
public:
    Animal(string name, int age, string breed)
    {
        this->name = name;
        this->age = age;
        this->breed = breed;

    }

     virtual void GetData() {
      
        cout << "Name: " << name << endl
            << "Age: " << age << endl
            << "Breed: " << breed << endl;



    }

    virtual void Say() = 0;

};

class Dog : public Animal
{
public:
    Dog(string name, int age, string breed, bool is_sevice,string comands, int  bones) : Animal(name,age, breed)
    {
        this->is_service = is_sevice;
        this->comands = comands;
        this->bones = bones;

    }


    void give_bone() {

        this->bones++;

    }

    void Say() override
    {
        cout << name << " speak gav-gav" << endl;
    }
    void GetData() override {
     
        cout << "Type: " << "Dog" << endl
            << "Name: " << name << endl
            << "Age: " << age << endl
            << "Breed: " << breed << endl
            << "Is Service: " << is_service << endl
            << "Commands: " << comands << endl 
            << "Bones count: " << bones << endl;

    

    }

private:
    bool is_service;
    string comands;
    int bones = 0;
};

class Cat : public Animal
{
public:
    Cat(string name, int age, string breed, int nail_size, int life_count, bool is_black) : Animal(name, age, breed)
    {
        this->nail_size = nail_size;
        this->life_count = life_count;
        this->is_black = is_black;

    }

    void GetData() override {

        cout << "Type: " << "Cat" << endl
            << "Name: " << name << endl
            << "Age: " << age << endl
            << "Breed: " << breed << endl
            << "Nail size : " << nail_size << endl
            << "Life count: " << life_count << endl
            << "Is black: " << is_black << endl;

    }


    void Say() override
    {
        cout << name << " speak miau-miau" << endl;
    }

private:
    int nail_size;
    int life_count = 9;
    bool is_black;

};

class Parrot : public Animal
{
public:
    Parrot(string name, int age, string breed, bool is_speak, int wings_size) : Animal(name, age, breed)
    {
        this->wings_size = wings_size;
        this->is_speak = is_speak;
    }

private:
    int wings_size;
    bool is_speak;
    
    
    void GetData() override {

        cout << "Type: " << "Parrot" << endl
        << "Name: " << name << endl
            << "Age: " << age << endl
            << "Breed: " << breed << endl
            << "Is Speak: " << is_speak << endl
            << "Wings size: " << wings_size << endl;


    }




    void Say() override
    {
        cout << name << " speak kray-kray" << endl;
    }
};



int main()
{
    Dog a("Alex", 4, "Doberman", true, "Run, Stop", 10);
    a.Say();
    a.GetData();
    a.give_bone();
    a.GetData();


    system("pause");
    return 0;
}