#include <iostream>
using namespace std;

class Parent {

    public:
        string skincolor = "black";
        string nationality  = "rwanda";

};

class Child : public Parent {

    public:
        string eduction = " Rwnayeri ";

};


int main(){

    Child emmy;

    cout << emmy.skincolor << endl;

}