#include <iostream>

using namespace std;
int main()
{
    uint32_t tab[9]={0};
    int size;
    string in;
    cin>>in;
    size=in.size();
    for(int i=0;i<size;i++)
    {
        tab[in[i]-'0']++;
    }
    for(int o=0;o<10;o++)
        cout<<"Liczba "<<o<<" w liczbie = "<<tab[o]<<endl;
    return 0;
}