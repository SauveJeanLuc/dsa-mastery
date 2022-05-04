// program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum

#include <iostream>
using namespace std;

int main() {

    int number;
    int result = 0;

    while(true){
        cout << "Please enter any number: ";
        cin >> number;

        if(number < 0){
            break;
        }

        if(number == 2){
            continue;
        }

        result + = number;

    }

    cout << "Sum: " << result << endl;

}
