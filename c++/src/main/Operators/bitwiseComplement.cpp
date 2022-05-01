/* 
35 = 00100011 (In Binary)

// Using bitwise complement operator
~ 00100011 
 __________
  11011100

N = -(N+1)
*/

#include <iostream>
using namespace std;

int main() {

    int a = 35;

    cout << "(~" << a << ") = " << (~a) << endl;

    return 0;
}