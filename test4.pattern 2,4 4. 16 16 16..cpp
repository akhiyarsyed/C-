#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int value = 2;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << setw(6) << value;  
        }
        value *= value;  
        cout << endl;
    }
    return 0;
}
