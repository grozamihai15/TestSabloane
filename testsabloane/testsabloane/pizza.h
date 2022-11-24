#pragma once
#include "interface.h"

class Pizza :public Interface
{
public:
	Pizza(string nume, int pret)
	{
		this->nume = nume;
		this->pret = pret;
	}
	void adaugaProdus()
	{
		listaProduse.push_back(this);
	}
}; 
