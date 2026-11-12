#include<iostream>
using namespace std;
int main()
{
    int base,exponent,value=1;
    cout<<"Enter the basenumber : ";
    cin>>base;
    cout<<"Enter the exponent : ";
    cin>>exponent;
    int fbase=base;
    if(exponent==0)
    {
        value=1;
    }
    else
    {
        if(((base>=1) && (base<=100)) && ((exponent>=1) && (exponent<=10)))
        {
            for(int i=1;i<=exponent;i++)
            {
                value=value*fbase;
            }
        }
    }
    cout<<value;

}