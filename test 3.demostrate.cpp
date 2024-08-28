#include <iostream>
using namespace std;
class Point {
public:
    int x, y;
    Point(int a, int b) {
        x = a;
        y = b;
    }
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};
int main() {
    Point P1(10, 15);
    cout << "P1: ";
    P1.display();
    Point P2 = P1;
    cout << "P2: ";
    P2.display();
    return 0;
}
