#include<iostream>
using namespace std;
int main()
{
    int cel=5;
    int target=1000;
    int hour=0;
    while (cel<=target)
    {
        cel=cel*2;
        hour++;
    }
    cout<<"hour "<<hour<<endl;
    cout<<"cel "<<cel<<endl;
    
}