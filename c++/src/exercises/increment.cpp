#include <iostream>
using namespace std;

int main(){

    int age = 18;

    for(int i = 4 ; i > 2 ; --i){
        cout << "I: " << i << endl;
        // I: 4
        // I: 3
    }

    //Statement: 
    int tookAge = age++;

    int maximumAge = age; 
    int minimumAge = age++;
    

    cout << "Age: " << age << endl;
    cout << "Maximum age: " << maximumAge << endl;
    cout << "Minimun age: " << minimumAge << endl;
    cout << "Age: " << age << endl;

}