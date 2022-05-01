#include <iostream>
using namespace std;

int main() {

    int num = 212, i;

    cout << "Shift Right Operation: " << endl;

    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    cout << "\nShift Left: " << endl;

    for(i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

    return 0;
}