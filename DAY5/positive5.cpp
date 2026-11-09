#include<iostream>
using namespace std;
int main()
{
    int posi;
    cin>>posi;
    if(posi>0)
    {
        posi=posi+1;
        cout<<"posi is positive number "<<posi;
    }
    else
    {
        cout<<"posi is negative number "<<posi;
    }
}