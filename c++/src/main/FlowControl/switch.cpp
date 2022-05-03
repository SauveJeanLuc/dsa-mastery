/*
    Small Calculator using Switch
*/

#include <iostream>
using namespace std;

int main () {

    //Get The numbers
    double firstNumber;
    double secondNumber;
    double result;
    //Ask operation as character
    char operation;

    cout << "=================================" << endl;
    cout << "= Welcome To Calculator Program =" << endl;
    cout << "=================================" << endl;

    cout << " Please Enter The First Number " << endl;
    cin >> firstNumber;

    cout << " Please Enter The Second Number " << endl;
    cin >> secondNumber;

    cout << " Please Enter The Character" << endl;
    cin >> operation;

    switch(operation){
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '/':
            result = firstNumber/secondNumber;
            break;
        case '*':
            result = firstNumber*secondNumber;
            break;
        default:
            cout << "You have inputted a wrong wrong character " << endl;
    }


    cout  << firstNumber << operation << secondNumber << " = " << result << endl;

}