#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are eligible to vote!" << endl;
    } else {
        int yearsLeft = 18 - age;
        cout << "You are allowed to vote after " << yearsLeft << " years." << endl;
    }
    return 0;
}
