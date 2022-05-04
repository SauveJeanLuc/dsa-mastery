#include <iostream>
using namespace std;

int main(){
    int password;

    while(true){
        cout << "Enter Password: ";

        cin >> password;

        if(password == 4567){
            goto password;
        }

        cout << "Wrong Password" << endl;
    }

    password:
        cout << "Welcome to Linux's Universe. Press Enter to Continue ... ";
        cin >> password;
}