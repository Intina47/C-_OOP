// Why templates
// 1.Code reusability: we can write code that will work with different types data
// we can create a function and use it with any data type
// 2.type checking: the template parameter T, provides information about the tpe of
// data used in the template code

// calculate the average marks of a student

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Student{
    public:
    vector<T>marks;
    // parametized constructor to initialize marks
    Student(const vector<T>&m) : marks(m){}
    // define a function to calculate avg marks
    T calculate_avg(){
        T sum=0;
        for(const T&mark: marks){
            sum +=mark;
        }
        T avg = sum / marks.size();
        cout << "Student average marks: "<<avg<<endl;
        return avg;
    }
};
int main() {
    int number_of_subjects;
    cout << "Enter the number of subjects: ";
    cin >> number_of_subjects;
    
    vector<double> student_marks(number_of_subjects);
    
    cout << "Enter student marks per subj: ";
    for(int i=0; i<number_of_subjects; ++i){
        cin >> student_marks[i];
    }
    
    Student<double> student1(student_marks);
    student1.calculate_avg();
    

    return 0;
}