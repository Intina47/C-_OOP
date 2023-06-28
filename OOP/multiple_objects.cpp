// Replace ___ with your code

#include <iostream>
using namespace std;

// create Student class with marks variable
class Student{
    public:
    int marks;
};

int main() {

    // create objects from Student class
    Student student1, student2;

    // get user input for marks of student1 and student2
    cin >> student1.marks;
    cin >> student2.marks;

    // print marks of both objects
    cout << student1.marks <<endl;
    cout << student2.marks <<endl;
    

    return 0;
}