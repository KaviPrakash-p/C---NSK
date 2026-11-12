#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            if(i%7!=0 && i%2!=0)
            {
                cout<<i<<endl;
                cout<<"print completed "<<endl;
            }
    }
}