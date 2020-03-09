#include <iostream>
#include "prosta.hpp"

using namespace std;

int main()
{
    try
    {
        punkt x(0.0,1.0);
        punkt y(1.0,1.2);
        punkt xx(78.0,1.2);
        punkt yy(3.0,1.7);
        prosta xd(x,y);
        prosta xe(xx,yy);
        cout<<xd.getter_A()<<" "<<xe.getter_A()<<"  "<<xd.getter_B()<<" "<<xe.getter_B()<<" "<<xd.getter_C()<<" "<<xe.getter_C()<<endl;
        punkt f(wheree(xe,xd));
        cout<<f.x<<" "<<f.y<<endl;        
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    return 0;
}