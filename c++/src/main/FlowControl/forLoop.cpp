#include <iostream>
using namespace std;

int main() {

    // Print 0 to 5

    for(int i = 0; i<6; i++){
        cout << i << endl;
    }

    // Find the sum of first n Natural Numbers

    int size;
    int result = 0;

    cout << " Put the size of how many numbers you want to add up: ";

    cin >> size;

    for (int i = 0; i <= size ; i++){
        result += i;
    }

    cout << " The sum is : " << result << endl;
}