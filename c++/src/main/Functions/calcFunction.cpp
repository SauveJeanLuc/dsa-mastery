#include <iostream>
using namespace std;


double calculator(int firstNumber , int secondNumber, char* signOperator);


int main() {

    int firstNumber = 45;
    int secondNumber = 100;
    char add = '+';
    char sub = '-';
    char mult = '*';
    char divid = '/';

    cout << "When You Add: " << calculator(firstNumber, secondNumber, &add) << endl;
    cout << "When You Subtract: " << calculator(firstNumber, secondNumber, &sub) << endl;
    cout << "When You Multiply: " << calculator(firstNumber, secondNumber, &mult) << endl;
    cout << "When You Divide: " << calculator(firstNumber, secondNumber, &divid) << endl;
    
}

double calculator(int firstNumber , int secondNumber, char* signOperator){
    switch (*signOperator){
        case '-':
            return firstNumber - secondNumber;
        case '+':
            return firstNumber + secondNumber;
        case '*':
            return firstNumber * secondNumber;
        case '/':
            return firstNumber / secondNumber;
        default:
            return 0.0;
    }

    return 0.0;
}