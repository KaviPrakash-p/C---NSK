#include<iostream>
using namespace std;
int main()
{
    bool is_raining;
    cout << "Is it raining?  ";
    cin >> is_raining;
    if (is_raining) {
        cout << "It is raining." << endl;
    } else {
        cout << "It is not raining." << endl;
    }
    return 0;
}