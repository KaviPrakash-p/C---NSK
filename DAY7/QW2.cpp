#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            odd=odd+(i*i);
        }
        else
        {
            even++;
        }

    }
    cout<<odd<<endl;
    cout<<even;
}