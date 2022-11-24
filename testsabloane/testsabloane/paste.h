#pragma once
#include "interface.h"

class Paste :public Interface
{
public:
	Paste(string nume,int pret)
	{
		this->nume = nume;
		this->pret = pret;
	}
	void adaugaProdus()
	{
		listaProduse.push_back(this);
	}
};