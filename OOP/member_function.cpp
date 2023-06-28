#include <iostream>
using namespace std;

// create a class car
class Car{
    public:
    // add member function
    void check_status(int gear){
        if(gear >= 1){
            cout << "car is running" <<endl;
        }else{
            cout << "Car is not running!" <<endl;
        }
    }
};

int main(){
    //create an object of the car
    Car car1;
    // access member function using object
    // nb: we use the '.' operator to call the member function
    car1.check_status(6);
    car1.check_status(0);
    
    return 0;
}