#include <iostream>
using namespace std;

int main () {

    int ages[] = {19, 20, 18, 53, 52};


    // using range based for loop
    for(const int &age: ages){
        cout << "Age: " << age << endl;
    }

    // using traditional for loop
    for(int i = 0; i < (sizeof(ages)/sizeof(ages[0])); i ++ ){
        cout << "Age Loop : " << ages[i] << endl;
    }

}