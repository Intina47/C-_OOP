#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        char gender;

        Person(string n, char g) : name(n), gender(g) {

        }
};

int main() {

    Person person("Michael Douglas", 'M');
    // print name variable of person object
    cout << person.name<< " " << person.gender << endl;

    return 0;
}
