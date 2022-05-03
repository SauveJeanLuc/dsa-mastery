// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped
#include <iostream>
using namespace std;

int main () {

    int positiveNumber;

    cout << "Please Enter any Number: " ;
    cin >> positiveNumber;

    if(positiveNumber > 0){
        cout << "Congratulations you have entered a positive number. ";
    }

    // Ommitting Bracelets in the program

    if ( positiveNumber > 0 ) 
        cout << " The number is found to Positive  " << endl;
    else
        cout << " The number is found to Negative  " << endl;
    



}