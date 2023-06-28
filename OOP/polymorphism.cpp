// the major concepts of OOP.
// Inheritance-base class, derived class
// Abstraction (pure virtual functions and abstract classes)
// Polymorphism-one entitiy for different functionalities
// Encapsulation-data-hiding
#include <iostream>
using namespace std;

class Payment{
    public:
    // polymorphism, make_payment used more than ones.
    // function overloading same function names differnt parameters sizes
    void make_payment(string card_number, string cvv, string expiry_date){
        cout << "Card payment success!" <<endl;
    }
    void make_payment(string paypal_id){
        cout << "Paypal sucess"<<endl;
    }
};

int main(){
    Payment payment;
    payment.make_payment("32324242442", "433","12/34");
    payment.make_payment("2111323242424");
    
    return 0;
}