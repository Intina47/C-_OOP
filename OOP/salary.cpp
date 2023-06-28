/**
 * setters and getter and contructors
Suppose a company increases the salary of every employee by a certain percentage. Create a program to calculate the salary of employees after the increment.
Name: Felix
New Salary: 30255.9
Name: Maria
New Salary: 11352
**/
#include <iostream>
using namespace std;

class Employee{
    private:
    double new_salary;
    public:
    string name;
    double current_salary;
    
    Employee(string n, double s) : name(n), current_salary(s) {
        
    }
    void set_salary(double inc_percentage){
        new_salary = current_salary + (inc_percentage/100.0) * current_salary;
    }
    
    double get_salary(){
        return new_salary;
    }
};
int main(){
    Employee employee("Ntina", 1000.0);
    Employee employee2("Derick", 26000.0);
    
    double inc_perc = 20.0;
    employee.set_salary(inc_perc);
    employee2.set_salary(inc_perc);
    
    cout << "Name: "<<employee.name <<endl;
    cout << "current_salary: "<<employee.current_salary <<endl;
    cout << "new_salary: "<<employee.get_salary() <<endl;
    cout << endl;
    cout << "Name: "<<employee2.name <<endl;
    cout << "current_salary: "<<employee2.current_salary <<endl;
    cout << "new_salary: "<<employee2.get_salary() <<endl;
    return 0;
}