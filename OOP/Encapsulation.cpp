// have all members of the class in the class, member variables and function variables
#include <iostream>
using namespace std;
 
class Area {
    private:
        double radius;
        
    public:
 
        // setter function
        void set_radius(double rad) {
            
            if (rad > 0) {
                radius = rad;
            }
            else {
                cout << "Error!! Radius is negative" << endl;
            }
        }
    
        // getter function
        double get_radius() {
            return radius;
        }
};
 
int main() {
    
    // get input value for radius
    double radius;
    cout << "Enter the value of radius: ";
    cin >> radius;
    
    Area area;
    
    // set value of radius
    area.set_radius(radius);
    
    // access the value of radius and compute the area
    double circle_area = 3.14 * area.get_radius() * area.get_radius();
 
    cout << "Area of circle: " << circle_area << endl;
 
    return 0;
}