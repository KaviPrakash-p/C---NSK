#include <iostream>
using namespace std;

int main() {

    int guest=4;
    int badge=0;

    for (int i = 1; i<= guest; i++) {

        cout << i << endl;
        badge++;
    }
    cout << "Badges = " << badge;
}