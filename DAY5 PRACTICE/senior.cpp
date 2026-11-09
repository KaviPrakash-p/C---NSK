#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age ";
    cin>>age;
    if(age>=60)
    {
        cout<<"eligible for senior citizen discount";
    }
    else
    {
        cout<<"the person is not a senior citizen";
    }
    return 0;
}