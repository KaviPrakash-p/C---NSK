#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=10;i<=n;i++)
    {
        int last=i%10;
        int temp=i;
        while(temp>=10){
            temp=temp/10;
        }
        int first=temp;
        if(first==last)
        {
            cout<<i<<endl;
            count++;
        }
    }
      cout<<count<<endl;
}