#include <iostream>
#include "punkt.hpp"


#ifndef _PROSTA_HPP
#define _PROSTA_HPP


class prosta
{
    private:
    double A=0.0;
    double B=0.0;
    double C=0.0;

    public:
    prosta()=default;
    prosta(const punkt &,const punkt &);
    prosta(const wektor &);
    prosta(const double &,const double &,const double &);
    prosta(const prosta &,const wektor &);
    prosta &operator=(prosta &)=delete;
    float getter_A();
    float getter_B();
    float getter_C();
};

#endif