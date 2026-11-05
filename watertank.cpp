#include<iostream>
using namespace std;
int main()
{
    int filling=15;
    int min=8;
    int leak=20;
    int intank=filling*min;
    cout<<"water in tank "<<intank-leak;
}