#include <iostream>
#include <list>

using namespace std;

#ifndef _STOS_HPP
#define _STOS_HPP

class stos
{
    public:
    void wloz(const string &);
    string zdejmij();
    string sprawdz();
    int rozmiar();
    stos odwroc();
    friend ostream& operator<<(ostream &wyj,const stos &);
    stos& operator=(stos &&);
    stos& operator=(const stos&);
    stos();
    stos(const int&);
    stos(initializer_list<string>);
    stos(const stos&);
    stos(stos&&);
    ~stos();

    private:
    int pojemnosc;
    int ile;
    string *stoss;


};


#endif