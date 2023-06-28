// Polymorphism is an important concept of OOP that allows us to use the //same entity for different tasks.
// Overloaded functions-(different functions with the same name) may have the same or different return types, as long as their parameters are different(in number or type ).
// For function overloading, functions should have the same name and different parameters (different number of parameters, different types of parameters, or both).
#include <iostream>
using namespace std; 
        
// create Area class
class Area {
    public:

        // create function to calculate area of rectangle 
        void compute_area(int length , int breadth) {            
            int area = length * breadth;
            cout << area << endl;
        }

        // create function to calculate area of square         
        void compute_area(int length) {            
            int area = length * length;
            cout << area << endl;
        }
};

int main() {

    // create Area object
    Area area;

    // get integer input for variables
    int rect_length, rect_breadth, square_length;
    cin >> rect_length >> rect_breadth >> square_length;

    // call compute_area() with arguments rect_length and rect_breadth 
    area.compute_area(rect_length,rect_breadth);
    
    // call compute_area() with the square_length argument 
    area.compute_area(square_length);

    return 0;
}