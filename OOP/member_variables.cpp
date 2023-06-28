#include <iostream>
using namespace std;

// create a class car
class Car{
    public:
    //add member variables
    int gear = 6;
    string brand = "audi";
};

int main(){
    //create an object of the car
    Car car1;
    //access member variables using object
    cout << "Gear: "<< car1.gear << endl;
    cout << "Gear: "<< car1.brand << endl;
    
    return 0;
}