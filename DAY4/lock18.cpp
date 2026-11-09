#include<iostream>
using namespace std;
int main()
{
    int lock=4827;
    int a=lock/1000%10;
    int b=lock/100%10;
    int c=lock/10%10;
    int d=lock%10;
    int sum=a+b+c+d;
    cout<<"sum of digits "<<sum;
}