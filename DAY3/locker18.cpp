#include<iostream>
using namespace std;
int main()
{
    int locker=4827;
    int l1=(locker/1000)%10;
    int l2=(locker/100)%10;
    int l3=(locker/10)%10;
    int l4=locker%10;
    int lockersum=l1+l2+l3+l4;
    cout<<"locker number is "<<lockersum;
}