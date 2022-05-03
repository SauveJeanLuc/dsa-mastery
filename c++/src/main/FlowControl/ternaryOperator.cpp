#include <iostream>
using namespace std;

// Use Ternary to get a number 
// If zero say zero: negative or positive, say it.

int main() {

    int inputNumber;
    cout << "Please input any number: ";
    cin >> inputNumber;

    string result;

    result = (inputNumber == 0) ? "Zero" : ( (inputNumber < 0) ? " Negative " : " Positive " );

    cout << "The number is : " << result << endl;

    return 0;
}