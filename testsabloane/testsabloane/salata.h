#pragma once
#include "interface.h"

class Salata :public Interface
{
public:
	Salata(string nume, int pret)
	{
		this->nume = nume;
		this->pret = pret;
	}
	void adaugaProdus()
	{
		listaProduse.push_back(this);
	}
};