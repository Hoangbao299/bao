#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    
    double getPerimeter() {
        return 2 * 3.14159 * radius;
    }
    
    double getArea() {
        return 3.14159 * radius * radius; 
};

int main() {
    Circle myCircle(5); 
    
    cout << "Chu vi hinh tron: " << myCircle.getPerimeter() << endl;
    cout << "Dien tich hinh tron: " << myCircle.getArea() << endl;
    
    return 0;
}
