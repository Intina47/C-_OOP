// same name as the class
// similar to member function but lack a return type
//nb: a costructor is called automatically when we create an object
// types:
// Deafault contructors
// Parameterized constructors
#include <iostream>
using namespace std;

class Student{
  public:
//   member variables
  string name;
  int score;
//   Parametized constructor
  Student(string student_name, int student_score){
      name = student_name;
      score = student_score;
  }
};
int main(){
    // create objects of student
    Student student1("Ntina", 20);
    Student student2("Mamba", 10);
    
    // print data members of the students
    cout << student1.name << " got " << student1.score <<endl;
    cout << student2.name << " got " << student2.score <<endl;
    return 0;
}

// constructors are mostly used to initialize member variables