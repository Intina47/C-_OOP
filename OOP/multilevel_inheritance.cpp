// multilevel inheritance
#include <iostream>
using namespace std;

class A{
    public:
    void A_class(){
        cout << "you just tappeed A"<<endl;
    }
};
// b only inherits A
class B : public A{
    public:
    void B_class(){
        cout << "you just tapped B" <<endl;
    }
};
// c inherits both A and B since B already inherits A
class C : public B{
    public:
    void C_class(){
        cout<< "you just tapped C"<<endl;
    }
};

int main() {
    C c;
    c.C_class();
    c.B_class();
    c.A_class();

    return 0;
}