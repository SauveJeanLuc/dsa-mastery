#include <iostream>
using namespace std;

template <class One, class Two, class Three = char>
class Printer {
    private:
        One one;
        Two two;
        Three three;
    
    public:
        Printer(One passedOne, Two passedTwo, Three passedThree): one(passedOne), two(passedTwo), three(passedThree) {} 
    
        void printVars(){
            cout << "One = " << one << endl;
            cout << "Two = " << two << endl;
            cout << "Three = " << three << endl;
        }
};

int main(){

    Printer<string, int> first("Me", 8.9, 'M');
    first.printVars();

}