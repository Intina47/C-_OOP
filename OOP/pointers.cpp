// pointers
#include <iostream>
using namespace std;
class Triangle{
    public:
    int base, height;
    // Triangle(int b, int h): base(b), height(h){
    //     cout << "variables intialized."<<endl;
    //     cout << b << " , " << h <<endl;
    // }
    int calculate_area(){
        int Area = (base * height) / 2;
        
        return Area;
    }
};
int main() {
    Triangle triangle1;
    Triangle* pt = &triangle1;
    cin >> pt->base >> pt->height;
    double area = pt->calculate_area();
   cout << area <<endl;
    return 0;
}