#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double a, b;

    a = 3.1415926535897932384626433832795028L;
    b = 2.5;

    cout << "Sum: " << (a + b) << endl;

    cout << "Difference: " << (a - b) << endl;

    cout << "Product: " << (a*b) << endl;

    cout << "Division: " << (a/b) << endl;

    cout << "Modulo: " << std::fmod(a,b) << endl;
}