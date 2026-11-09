#include<iostream>
using namespace std;
int main(){
    int inc=2;
    int unit=100;
    int extraunit=3;
    int total=250;
    int remainingunit=total-unit;
    int totalcose=unit*inc+remainingunit*extraunit;
    cout<<"total cost is "<<totalcose;
}