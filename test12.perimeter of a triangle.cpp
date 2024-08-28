#include <iostream>
#include <cmath>  
using namespace std;
class Triangle {
private:
    double side1, side2, side3;
public:
    Triangle(double a, double b, double c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }
    void printPerimeter() {
        double perimeter = side1 + side2 + side3;
        cout << "Perimeter of the triangle: " << perimeter << " units" << endl;
    }
    void printArea() {
        double s = (side1 + side2 + side3) / 2;  
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));  
        cout << "Area of the triangle: " << area << " square units" << endl;
    }
};
int main() {
    Triangle t(3, 4, 5);
    t.printPerimeter();
    t.printArea();
    return 0;
}
