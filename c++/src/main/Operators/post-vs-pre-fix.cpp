/*
    ++i : i is incremented and value of expression is the incremented i.
    i++ : i is incremented and value of i stays the original value
*/

#include <iostream>
using namespace std;

int main (){
    int i = 10 // i now is set to 10
    int j = ++i // i is set to 11 and value of j becomes 11
    int k = i++ // i is set to 12 but value of expression stays 11.

    return 0;
}