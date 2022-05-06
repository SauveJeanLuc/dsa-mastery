#include <iostream>
using namespace std;

//Factorial of a number using recursion
// 1*2*3*4*6

int factorial(int number);

int main() {

    cout << "Factorial of 9 : " << factorial(9) << endl ;

    return 0;
}

int factorial(int number){
    if(number == 1){
        return number;
    }
    else{
        return factorial( number -1 ) * number ;
    }
}
