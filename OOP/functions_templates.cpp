// functions_templates.cpp
// templates allows us to create classes and functions that can accept all data types
// allows us to write generic programs 
#include <iostream>
using namespace std;
template<typename T>
T add(T num1, T num2){
    return (num1 + num2);
}
template<typename S>
S square(S num1){
    return(num1 * num1);
}

int main() {
    int sum = add<int>(10,10);
    cout << sum <<endl;
    
    int num1;
    float num2;
    cin >> num1 >> num2;
    int square1= square<int>(num1);
    float square2= square<float>(num2);
    cout << "num1: " <<square1<<endl;
    cout << "num1: " <<square2<<endl;
    
    return 0;
}