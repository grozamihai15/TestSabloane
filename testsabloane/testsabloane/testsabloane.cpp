#include <iostream>
#include <list>
#include <iterator>
#include <string>
#include "interface.h"
#include "pizza.h"
#include "paste.h"
#include "salata.h"

list <Interface *> listaProduse;
void CheckOut()
{
    int suma = 0;
    cout << "Produsele din comanda sunt:" << endl;
    std::list<Interface>::iterator it;
    for (auto it = listaProduse.begin(); it != listaProduse.end(); ++it) 
    {
        std::cout << it.nume << endl;
        suma = suma + it.pret;
    }
    cout <<"Pretul total:"<< suma<<endl;

}
int main()
{
    Paste paste1=Paste("Paste 1", 15);
    Paste paste2=Paste("Paste 2", 20);
    Salata salata1=Salata("Salata 1",10);
    Salata salata2=Salata("Salata 2", 50);
    Salata salata3=Salata("Salata 3", 25);
    Pizza pizza1=Pizza("Pizza 1", 10);
    Pizza pizza2=Pizza("Pizza 1", 30);
    Pizza pizza3=Pizza("Pizza 1", 60);

    paste2.adaugaProdus();
    salata3.adaugaProdus();
    pizza2.adaugaProdus();
    pizza3.adaugaProdus();
}
