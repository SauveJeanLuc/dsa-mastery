#include <iostream>
using namespace std;

class Count {
    private:
        int value;
    
    public:
        Count(): value(6) {}

    Count operator ++ (){
        Count temp;

        temp.value = ++value;
        return temp;
    }
    
    Count operator ++ (int){
        Count temp;

        temp.value = value++;
        return temp;
    }

    void display() {
        cout << "Count" << value << endl;
    }
};

int main() {

    Count firstCounter;
    Count secondCounter;

    ++firstCounter;
    firstCounter.display();

    secondCounter++;
    secondCounter.display();

}