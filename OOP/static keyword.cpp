// static keyword
// when we define class members with the term static it gives the class ownership of the members meaning different objects derived from the class will be able to share common variables or functions. example a company can have more than one employee.
// this mean all objects will be able to share the same data
// when we use static keyword on member functions it mean we do not need an object to access the variable outside the class, although we can still access them using objects
// nb:Unlike static functions, a static variable is declared inside the class and defined outside the class.
// we can access static varibles inside a non-static function but we can not access non static variables inside static function
#include <iostream>
using namespace std;

// Create a program to calculate the area of a rectangle using both static and non-static variables inside a non-static function.

class Rectangle{
    public:
    int length;
    static int breadth;
    
    void area(){
        int area = length*breadth;
        cout << "Area: " << area <<endl;
    }
};
// define static variable breadth
int Rectangle::breadth = 20;

int main(){
    Rectangle rec;
    rec.length = 10;
    rec.area();
    
    return 0;
}