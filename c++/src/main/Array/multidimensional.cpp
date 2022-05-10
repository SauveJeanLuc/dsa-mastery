#include <iostream>
using namespace std;

// Declaration: 
// Function to print dimensional array:

void twoDimensionalArrayPrinter(int twoDimensional[][3]);

int main () {

    int twoDimensional[2][3] = { {0, 1, 2}, {1, 1, 2} };

    int threeDimensional[2][3][4] = {
        { { 3, 4, 2, 3 } , { 0, -3, 9, 11 }, { 23, 12, 23 ,2 } },
        { { 13, 4, 56, 3 } , { 5, 9, 3, 5 }, {5, 1, 4, 9} }
    };


    cout << "Two Dimensional Array: Traditional for Loop";

    twoDimensionalArrayPrinter(twoDimensional);

    //Range Based For Loop ( 2 Dimensional Array )

    cout << "Two Dimensional Array: Range Based for Loop";
    int counter = 0;

    for ( auto &row : twoDimensional) {
        for ( auto &column : row){
            cout << counter << " th: " << column << endl;
            counter ++;
        } 
    }

    cout << " You are now going to fill the Two Dimensional Array with Your own numbers: ";

    for( int row = 0; row < 2; row++){
        for( int column = 0; column < 3; column++){
            cin >> twoDimensional[row][column];
        }
    }

    twoDimensionalArrayPrinter(twoDimensional);


}

void twoDimensionalArrayPrinter(int twoDimensional[][3]){

    for( int row = 0;  row < 2; row ++ ){
        for (int column = 0; column < 3; column ++){
            cout << "Record [ " << row << "][" << column << "] = " << twoDimensional[row][column] << endl;
        }
    }  

}
