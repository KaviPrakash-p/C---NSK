#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int psum=0;
    for(int i=1;i<=n;i++)
    {
        sum=psum+i;
        psum=sum;
    }
    cout<<sum<<endl;
}