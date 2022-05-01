/*
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise XOR Operation of 12 and 25
    00001100
^   00011001
    _________
    00010101  = 21 (In decimal)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 15;

    cout << "(" << a << "|" << b << ") = " << (a^b) << endl; 
}