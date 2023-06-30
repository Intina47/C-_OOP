// protected Access modifier
// can only be accessible within the base class or derived classes, or using setters and getters to access outside this proxies

// Create a program to access protected members of a class.
#include <iostream>
using namespace std;

class Account{
    protected:
    string account_id;
    string password;
    public:
    void display_info(){
        cout << account_id <<endl;
        cout << password <<endl;
    }
};

class Gmail : public Account{
    public:
    string domain = "@gmail.com";
    Gmail(string username, string pwd){
        password = pwd;
        account_id = username + domain;
    }
};

int main(){
    Gmail gmail("slimshady","8Mile#2002");
    gmail.display_info();
    
    return 0;
}