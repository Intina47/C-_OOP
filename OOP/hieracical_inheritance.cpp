// hieracical inheritance
#include <iostream>
using namespace std;

class Person{
    public:
    void display_info(){
        cout<< "i am a person." << endl;
    }
};
class Student : public Person{
    public:
    void display_info(){
        cout << "I am a student."<<endl;
    }
};
class Employee : public Person{
    public:
    void display_info(){
        cout << "I am an employee."<<endl;
    }
};

int main() {
    Student student;
    student.display_info();
    Employee employee;
    employee.display_info();

    return 0;
}