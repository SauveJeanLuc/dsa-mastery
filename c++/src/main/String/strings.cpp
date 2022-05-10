#include <iostream>
using namespace std;


void display (char inputString[]);

int main(){
    
    /*

    */

    char firstName[100];
    string lastName;

    cout << "Please Enter your second Names: ";
    getline(cin, lastName);

    cout << "Please Enter your first Names: ";
    cin.get(firstName, 100);

    cout << firstName << " ";




    cout << lastName << endl;
    display(firstName);

}

void display (char inputString[]){
    cout << " Char Array Is: " << inputString << endl;
}