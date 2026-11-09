#include<iostream>
using namespace std;
int main()
{ 
    int age;
    cout<<"enter your age: ";
    cin>>age;
    cout<<"Your age is: "<<age<<endl;
    if(age>=18&&age<=120)
    {
        cout<<"elgible for vote";
    }
    else
    {
        cout<<"not elgible for vote";
    }
    return 0;
}