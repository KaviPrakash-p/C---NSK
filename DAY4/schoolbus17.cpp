#include<iostream>
using namespace std;
int main()
{
    int totstu=1250;
    int perbus=45;
    int fullbus=totstu/perbus;
    int leftover=totstu%perbus;
    cout<<"full bus "<<fullbus<<endl;
    cout<<"left over "<<leftover;
}