/*

    12 = 00001100 (In Binary)

    25 = 00011001 (In Binary)

    //Bitwise AND Operation of 12 and 25

        00001100
    &    00011001
        _________
        00001000  = 8 (In decimal)

*/

#include <iostream>
using namespace std;

int main(){

    int a = 12;
    int b = 25;

    cout <<  " a & b = " << (a&b) << endl;
}