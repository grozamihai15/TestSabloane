#pragma once
#include <iostream>
#include <string>

using namespace std;

class Interface
{
public:
	Interface();
	virtual void adaugaProdus() = 0;
protected:
	string nume;
	int pret;
};