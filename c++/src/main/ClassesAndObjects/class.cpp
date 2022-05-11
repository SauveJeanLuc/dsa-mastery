#include <iostream>
using namespace std;

enum fileType {
    PDF, JPEG, TXT, DOCX, XLSX
};

class FileOperator {
    private:
        fileType type;
        float size;
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

        FileOperator(fileType type, float size){
            this->type = type;
            this->size = size;
        }

        // Copy Constructor

        FileOperator(FileOperator &obj){
            content = obj.content;
        }


        float getFileSize(){
            return size;
        }

};

int main(){

    FileOperator studentsList(XLSX, 340);
    studentsList.content = "Me, You , She";

    FileOperator teachersList(DOCX, 940);

    //Using Copy constructor
    //TODO: Inspect why all elements are being copied
    
    teachersList = studentsList;
    

    cout << "Student List File Size: " << studentsList.getFileSize() << endl;
    cout << "Teachers List File Size: " << teachersList.getFileSize() << endl;
    cout << "Teachers List File Content: " << teachersList.content << endl;

}