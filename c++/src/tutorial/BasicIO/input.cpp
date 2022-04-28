#include <iostream>
using namespace std;

int main() {
    int marks, passingLine = 70;
    cout << " Enter your Marks ";
    cin >> marks;
    if( marks < passingLine){
        cout << " You are not yet competent " << endl;
    }else{
        cout << " You are competent " << endl;
    }

}