#include <iostream>
using namespace std;


double calc(int firstNumber , int secondNumber, char &operator){
    switch (operator){
        case '-':
            return firstNumber - secondNumber;
        case '+':
            return firstNumber + secondNumber;
        case '*':
            return firstNumber * secondNumber;
        case '/':
            return firstNumber / secondNumber;
    }
}


int main() {

    int firstNumber = 45;
    int secondNumber = 100;

    cout << "When You Add: " << calc(firstNumber, secondNumber, '+') << endl;
    cout << "When You Subtract: " << calc(firstNumber, secondNumber, '-') << endl;
    cout << "When You Multiply: " << calc(firstNumber, secondNumber, '*') << endl;
    cout << "When You Divide: " << calc(firstNumber, secondNumber, '/') << endl;


}