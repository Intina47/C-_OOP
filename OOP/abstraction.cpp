// the major concepts of OOP.
// Inheritance-base class, derived class
// Abstraction (pure virtual functions and abstract classes)
// Polymorphism-one entitiy for different functionalities
// Encapsulation-data-hiding
#include <iostream>
using namespace std;
// abstacct class
class Motor_Bike{
    public:
    //pure virtual function
    virtual void brake() =0;
};
class Sport_bike : public Motor_Bike{
    public:
    void brake(){
        cout << "Stopping sport Bike"<<endl;
    }
};
class Casual_bike{
    public:
    void brake(){
        cout << "stopping casual bike"<<endl;
    }
};

int main(){
    Sport_bike sport_bike;
    sport_bike.brake();
    Casual_bike casualbike;
    casualbike.brake();
    
    return 0;
}