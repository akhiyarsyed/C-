#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    double number1;
    cout << "Enter a number to find its square root: ";
    cin >> number1;
    double squareRoot = sqrt(number1);
    cout << "Square root of " << number1 << " is: " << squareRoot << endl;
    double number2;
    cout << "Enter a number to find its cube root: ";
    cin >> number2;
    double cubeRoot = cbrt(number2);
    cout << "Cube root of " << number2 << " is: " << cubeRoot << endl;
    return 0;
}
