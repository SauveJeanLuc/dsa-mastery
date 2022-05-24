#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float fiveHardCoded[] = {6.5, 7.983, 98.3, 343.34, 341.00};

    // Range based loop
    // for(float num: fiveHardCoded) {
    //     cout << "Num: " << num << endl;
    // }

    for (int i = 0; i < sizeof(fiveHardCoded)/sizeof(fiveHardCoded[0]); i++){
        cout << "Num: " << fixed << setprecision(2) << fiveHardCoded[i] << endl;
    }

    cout << "Second Element: " << fiveHardCoded[1] << endl;
    
}