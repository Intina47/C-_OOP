// to access private data members outide the class
//we use getters and setters
//setter function - allows us to set the value of data members
//getter function - allows us to get value of data members
#include <iostream>
using namespace std;
 
class Square {
    private:
    
        // private variable
        int side;
        
    public:
 
        // setter function that assigns
        // the value of the s parameter
        // to the private variable side
        void set_side(int s) {
            side = s;
        }
        
        // getter function that returns
        // the value of the private variable
        int get_side() {
            return side;
        }
};
 
int main() {
    
    // create object of the Square class
    Square square1;
 
    // call setter function
    // initialize side to 6
    square1.set_side(6);
    
    // call getter function to calculate area
    int area = square1.get_side() * square1.get_side();
 
    // print the area
    cout << "Area: " << area << endl;
 
    return 0;
}
 
// Output: Area: 36