#include<iostream>
using namespace std;
int main()
{
    int totegg=275;
    int pertray=30;
    int fulltrays=totegg/pertray;
    int leftover=totegg%pertray;
    cout<<"full tray "<<fulltrays<<endl;
    cout<<"left over "<<leftover;

}