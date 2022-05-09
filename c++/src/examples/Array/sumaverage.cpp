#include <iostream>
using namespace std;

// Display Sum and Average of Array Elements Using for Loop

int main() {

    int studentsMarks[] = {1, 4, 4, 8};
    double sum = 0;
    double average = 0;

    for (const int &mark : studentsMarks){
        sum += mark;
    }

    average = sum / ( sizeof(studentsMarks) / sizeof(studentsMarks[0]) );

    cout << "SizeOf Array: "<< sizeof(studentsMarks) <<endl;
    cout << "SizeOf Array Index 0: " << sizeof(studentsMarks[0]) << endl ;
    cout << "SizeOf Array:" << ( sizeof(studentsMarks) / sizeof(studentsMarks[0]) ) <<endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

}