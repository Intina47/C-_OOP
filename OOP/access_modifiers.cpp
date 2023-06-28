// access modifiers are used to set the visibity of data member and member functions
// and even classes eg: public-allows access from outside the class, 
//private-restricts access from outside the class, 
//protected - resticted access to within the class and objects derives from the class
// Replace ___ with your code

#include <iostream>
using namespace std;

// create Teacher class
class Teacher {
    public:
        string name = "Dr. Curtis Connors";
};

// create Student class
class Student{
    public:
    string name = "Peter Parker";
};

// create function
void display_names() {

    // create objects teacher and student
    // print name of both the objects
    Teacher teacher;
    Student student;
    
    cout << teacher.name << endl;
    cout << student.name << endl;
}

int main() {

    // call display_names() function
    display_names();

    return 0;
}