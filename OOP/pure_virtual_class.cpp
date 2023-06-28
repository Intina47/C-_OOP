// pure_virtual_class.cpp
#include <iostream>
using namespace std;
// this class is both an abstract class and our base class
// its abstract because it has a pure virtual function
class Polygon{
  public:
  double total_sides;
  virtual double calculate_area() = 0;
  
  void calulate_perimeter(int sides[]){
      int perimeter =0;
      for(int i=0; i<total_sides; ++i){
          perimeter = perimeter + sides[i];
      }
      cout << "Shape perimeter= "<<perimeter<<endl;
  }
};

class Rectangle : public Polygon{
    public:
    double length, width;
    Rectangle(double l, double w) : length(l), width(w){
        total_sides = 4;
        cout << "Rec Dimensions initialized!" <<endl;
    }
    // calculate area of rectangle
    double calculate_area(){
        int area = length * width;
        return area;
    }
};

class Triangle : public Polygon{
    public:
    double base, height;
    Triangle(double b, double h) : base(b), height(h){
        cout << "Tri Dimensions initialized!" <<endl;
        total_sides = 3;
    }
    
    double calculate_area(){
        int area = (base * height)/2;
        return area;
    }
};

int main() {
    int sides[] = {34,43,54,23,23,43,54,75,76,8,5,2,231,32};
    Rectangle rectangle(10,20);
    double area = rectangle.calculate_area();
    cout << "Rec Area= "<<area<<endl;
    rectangle.calulate_perimeter(sides);
    cout << endl;
    Triangle triangle(10,20);
    double tri_area = triangle.calculate_area();
    cout << "Tri Area= "<<tri_area<<endl;
    triangle.calulate_perimeter(sides);
    
    return 0;
}