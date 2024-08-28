#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer number: ";
    cin >> number;
    int leastSignificantDigit = number % 10;
    int nextLeastSignificantDigit = (number / 10) % 10;
    cout << "The least significant digit is " << leastSignificantDigit << endl;
    cout << "The next least significant digit is " << nextLeastSignificantDigit << endl;
    return 0;
}
