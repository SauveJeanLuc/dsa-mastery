// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main() {

    int result = 0;
    int input;

    cout << "Enter a number: ";
    cin >> input;

    while (input >= 0) {
        result += input;

        cout << "Enter a positive number to Sum ";
        cin >> input;
    }

    cout << " The sum is : " << result << endl;

}