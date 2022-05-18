#include <iostream>
using namespace std;


class Number {

    private:
        string type;

    public: 
        Number () : type("Any Number") {}

    virtual string getType() {
        return type;
    }

};

class Integer : public Number {

    private: 
        string type;

    public: 
        Integer() : type("Integer") {}

    string getType() override {
        return type;
    }

};

class Complex : public Number {
    private: 
        string type;

    public: 
        Complex() : type("Complex") {}
    
    string getType() override {
        return type;
    }
};


void print (Number *number){
    cout << "Number: " << number->getType() << endl;
}

int main() {

    Number *number = new Number();
    Number *integer = new Integer();
    Number *complex = new Complex();

    print(number);
    print(integer);
    print(complex);
    
}