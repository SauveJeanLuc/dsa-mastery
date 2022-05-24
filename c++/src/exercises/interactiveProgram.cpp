#include <iostream>
using namespace std;

int main(){
    
    int inputInteger;

    cout << " WELCOME TO INTEGER-USER PROGRAM " << endl;
    cout << " Please enter any Integer: " << endl;

    cin >> inputInteger;

    if(inputInteger < 10) 
        cout << " This number is too small " << endl;
    else
        cout << " This number is big enough " << endl; 

}