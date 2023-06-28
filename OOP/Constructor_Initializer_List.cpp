// Replace ___ with your code

#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        char gender;

        // create constructor with string parameter named argument
        // initializer list
        // Member variables should be initialized in the same order they are declared
        Person(string n, char g) : name(n), gender(g) {

        }
};

int main() {

    // create Person object
    // pass "Michael Douglas" as argument to constructor
    Person person("Michael Douglas", 'M');
    // print name variable of person object
    cout << person.name<< " " << person.gender << endl;

    return 0;
}