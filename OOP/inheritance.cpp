/**
 * Inheritance allows a class (child or derived class) 
 * to inherit variables and functions from another 
 * class (parent or base class).
 * */

#include <iostream>
using namespace std;
 
// base class
class Animal {
    public:
    	int legs;
        void eat() {
            cout << "I can eat" << endl;
        }
};
 
// the Dog class is derived from Animal
class Dog: public Animal {
    public:
 
        void bark() {
            cout << "I can bark" << endl;
        }
};
 
int main() {
    
    // create object of Dog
    Dog dog1;
 
    // access the bark function of Dog
    dog1.bark();
 
    // access the eat() function of Animal
    dog1.eat();
    dog1.legs = 4;
 
    return 0;
}