// C++ Program to display address of each element of an array 
#include <iostream>
using namespace std;

int main () {

    int array[8] = {4, 6, 12, 14, 6, 7, 8, 90};

    int *pointerToArray = array;

    for(int i = 0 ; i <= 7; i++){
        cout << " Address of " << i << "th element: " << (pointerToArray + i) <<" || " << &array[i] << endl;
    }

    return 0;

}