#include <iostream>
#include "punkt.hpp"
#include "prosta.hpp"


prosta::prosta(const punkt &a,const punkt &b)
{
    if(a.x==b.x&&a.y==b.y){throw std::invalid_argument("Punkty sa takie same.");}
    this->A=(-1)*(b.y-a.y);
    this->B=(b.x-a.x);
    this->C=(-1)*(this->A*(a.y)+this->B*(a.x));
}

float prosta::getter_A(){return A;}

float prosta::getter_B(){return B;}

float prosta::getter_C(){return C;}