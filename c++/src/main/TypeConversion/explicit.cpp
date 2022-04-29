#include <iostream>
using namespace std;

int main() {

    double heartBeat = 4.89;
    cout << "Heart Beat Original Value: " << heartBeat << endl;

    // C-Style Conversion
    int heartBeatInt = (int)heartBeat;
    cout << "Heart Beat Integer Value: " << heartBeatInt << endl;

    //Function-Style Conversion
    int heartBeatReal = int(heartBeat);
    cout << "Heart Beat Integer Value: " << heartBeatReal << endl;

    return 0;

}