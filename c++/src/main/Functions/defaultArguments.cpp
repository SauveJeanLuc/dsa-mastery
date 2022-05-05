#include <iostream>
using namespace std;

// Program that receives name of Movie, Age of Viewer and Restriction

bool deservesToWatch(string movieName, int viewerAge, int ageRestriction = 18);

int main() {

    deservesToWatch("Anaconda", 18, 20);

    return 0;
}

bool deservesToWatch(string movieName, int viewerAge, int ageRestriction){
    if(viewerAge < ageRestriction) {
        cout << "You are not allowed to watch this movie" << endl;
        return false;
    }

    cout << "Welcome to the Cinema :) ..." << endl;
    cout << "Deserve Studio Present To You: ....." <<": "<< movieName << endl;
    return true;
}