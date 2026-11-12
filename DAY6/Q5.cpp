#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    int avg=sum/n;
    cout<<"sum "<<sum<<endl;
    cout<<"avg "<<avg;
}