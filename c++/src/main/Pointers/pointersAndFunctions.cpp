#include <iostream>
using namespace std;

void swapWithoutPointers (int &firstNum, int &secondNum) {
    
    int temp = secondNum;
    secondNum = firstNum;
    firstNum = temp;

}

void swapWithPointers (int *firstNum, int *secondNum){
    int temp = *firstNum;

    *firstNum = *secondNum;
    *secondNum = temp;
}

int main(){

    int firstNum = 9;
    int secondNum = 98;

    swapWithoutPointers(firstNum, secondNum);

    cout << "First Num: " << firstNum << " | " << "Second Num: " << secondNum <<endl;

    swapWithPointers(&firstNum, &secondNum);

    cout << "First Num: " << firstNum << " | " << "Second Num: " << secondNum <<endl;
}