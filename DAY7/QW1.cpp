#include <iostream>
using namespace std;

int main()
{
    int n;
    int total = 0;
    cout << "Enter number of sheets: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int label = i * 4;
        cout << label << endl;
        total = total + label;
    }
    cout << "Total = " << total << endl;
}