#include <iostream>
#include "prosta.hpp"

using namespace std;

int main()
{
    try
    {
        punkt* x=new punkt(1.0,1.0);
        punkt* y=new punkt(12.0,2.0);
        prosta *p=new prosta(x,y);
        p->getter_prosta();

    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    return 0;
}