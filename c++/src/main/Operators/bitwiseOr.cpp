/*

12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25
    00001100
|   00011001
    _________
    00011101  = 29 (In decimal)

*/

#include <iostream>
using namespace std;

int main(){
    int a = 12, b =25;

    cout << "( " << a << " | " << b << " ) = " << (a|b) << endl;

}