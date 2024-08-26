#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int a = num1;
    int b = num2;

    do {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    } while (a != b);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << a << endl;

    return 0;
}
