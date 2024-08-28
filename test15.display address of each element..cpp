#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 
    cout << "Displaying address using arrays:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Address of element " << i << " is: " << &arr[i] << endl;
    }
    return 0;
}
