#include "expre.hpp"
#include "numconvar.hpp"
#include <iostream>
#include "unops.hpp"
#include "binops.hpp"

using namespace std;

int main()
{
    // expre* x=new ln(new var("X"));
    // var::addval("X",231);
    // cout<<x->eval()<<endl;
    // cout<<x->print()<<endl;

    expre* fs=new divv(
            new mult(
                new sub(
                    new var("x"),new number(1)),
                    new var("x")),
                new number(2));

    cout<<fs->print()<<endl;

    expre* ss=new divv(new add(new number(3),new number(5)),new add(new number(2),new mult(new var("x"),new number(7))));
    cout<<ss->print()<<endl;

    //expre* ts=new sub();//here we need next samples but i dont want to do this shit XD




    for(double i=0.01;i<1.0;i+=0.01)
    {
        var::addval("x",i);
        cout<<fs->eval()<<endl;
        cout<<ss->eval()<<endl;
    }

    return 0;
}