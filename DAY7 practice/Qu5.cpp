#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;
    int score=30;
    int quali=0;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(score>=60)
        {
            cout<<score<<endl;
            quali++;
            sum=sum+score;
        }
        score=score+10;
    }
    cout<<quali<<endl;
    cout<<sum;
}