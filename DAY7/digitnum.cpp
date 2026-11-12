#include<iostream>
using namespace std;
int main()
{
    int num=1573;
    int count=1;
    int quo=num;
    while(quo>0)
    {
        num=num/10;
        count++;
    }
    cout<<count;
}