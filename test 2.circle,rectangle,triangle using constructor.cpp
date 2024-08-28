#include <iostream>
#include <cmath>
class Area {
public:
    Area(double radius) {
        double area = M_PI * radius * radius;
        std::cout << "Area of the circle: " << area << std::endl;
    }
    Area(double length, double breadth) {
        double area = length * breadth;
        std::cout << "Area of the rectangle: " << area << std::endl;
    }
    Area(double base, double height, bool isTriangle) {
        if (isTriangle) {
            double area = 0.5 * base * height;
            std::cout << "Area of the triangle: " << area << std::endl;
        }
    }
};
int main() {
    double radius = 3;
    Area circle(radius);
    double length = 4, breadth = 5;
    Area rectangle(length, breadth);
    double base = 6, height = 7;
    Area triangle(base, height, true);
    return 0;
}
