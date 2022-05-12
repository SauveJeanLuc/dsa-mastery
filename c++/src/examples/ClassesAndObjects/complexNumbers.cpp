#include <iostream>
using namespace std;

class ComplexNumber {
    private:
        float real;
        float imaginary;
    
    public:
        ComplexNumber(): real(0), imaginary(0) {}
    
        void input(){
            cout << "Real Part of the Number: ";
            cin >> this->real;
            cout << "Imaginary Part of the Number: ";
            cin >> this->imaginary;
        }

        void output(){
            if(imaginary < 0)
                cout << "Complex Number: " << real << imaginary << "i";
            else
                cout << "Complex Number: " << real << "+" << imaginary << "i" << endl;
        }

        ComplexNumber operator + (const ComplexNumber& obj) {
            ComplexNumber temp;
            temp.real = real + obj.real;
            temp.imaginary = imaginary + obj.imaginary;
            return temp;
        }
};


int main(){

    ComplexNumber gravitationalConstant, buencyConstant, gravitationalBuencyConstant;

    cout << "Gravitation Constant: " << endl;
    gravitationalConstant.input();

    cout << "Buency Constant: " << endl;
    buencyConstant.input();

    gravitationalBuencyConstant = gravitationalConstant + buencyConstant;
    gravitationalBuencyConstant.output();
}   