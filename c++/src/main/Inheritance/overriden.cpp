#include <iostream>
using namespace std;

class Base {

    public: 
        void print() {
            cout << "Print from base function" << endl;
        }

};

class DerivedFromBase : public Base {

    public: 
        void print(){
            cout << "Print from Overriden function" << endl; 
        }

};

int main () {

    Base baseIdea;
    DerivedFromBase derivedFromBaseIdea;

    baseIdea.print();
    derivedFromBaseIdea.print();
}