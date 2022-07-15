#pragma once
#include <iostream>
using namespace std;

class Employee
{
public:
	virtual void Print() = 0;
};


class President : public Employee
{
public:
	void Print() { cout << "I'm a President\n"; }
};


class Manager : public Employee
{
public:
	void Print() { cout << "I'm a Manager\n"; }
};


class Worker : public Employee
{
public:
	void Print() { cout << "I'm a Worker\n"; }
};
