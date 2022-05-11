#include <iostream>
using namespace std;

enum fileType {
    PDF, JPEG, TXT, DOCX, XLSX
};

class FileOperator {
    private:
        fileType type;
        string size;
    public: 
        string content;

        /*
            Constructor is a special type of member function that is called automatically when an object is created

            - Constructor has same name as class
            - Constructor does not have a return type
            - Is public
        */

        // Default Constructor  

        FileOperator(){
            cout << "New File Created";
        }

        //Parameterized Constructor
        
        FileOperator(fileType type, string size){
            this.type = type;
            this.size = size;
        }
}