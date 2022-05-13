#include <iostream>
using namespace std;

int main () {

    // Address of a variable
    int variableWithAddress = 9;

    cout << "Value of Variable : " << variableWithAddress << endl ;
    cout << "Address of Variable : " << &variableWithAddress << endl ;

    // Declaring a pointer variable
    int *pointer;       //Or Like This:  int *pointVar;


    // Assign address to pointer;
    pointer = &variableWithAddress;


    // Get value from Address using pointer
    int variableToStoreValueFromOthersAdresses;

    variableToStoreValueFromOthersAdresses = *pointer;

    cout <<"Value that pointer is holding: " << pointer << endl;

    cout <<"VariableToStoreValueFromOthersAdresses value: " << *pointer << endl;

    // Change variables value using pointer
    *pointer = 2003;
    
    cout <<"New VariableToStoreValueFromOthersAdresses value: " << *pointer << "||" <<  variableWithAddress << endl;

    variableWithAddress = 9090;

    cout <<"New New VariableToStoreValueFromOthersAdresses value: " << *pointer << "||" <<  variableWithAddress << endl;

}