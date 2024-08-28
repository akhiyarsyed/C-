#include <iostream>
using namespace std;
int main() {
    int number, originalNumber, reversedNumber = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number;
    while (number != 0) {
        remainder = number % 10;  
        reversedNumber = reversedNumber * 10 + remainder;  
        number /= 10;  
    }
    if (originalNumber == reversedNumber) {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "It is not a Palindrome" << endl;
    }
    return 0;
}
