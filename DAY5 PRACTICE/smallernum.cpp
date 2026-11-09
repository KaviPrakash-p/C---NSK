#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cout<<"enter the second number ";
    cin>>b;
    if(a<b)
    {
        cout<<"the smaller number is ";
        cout<<a;
    }
    else
    {
        cout<<"the smaller number is ";
        cout<<b;
    }
    return 0;
}