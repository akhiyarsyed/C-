#include <iostream>
using namespace std;

int main()
{

    int arr[] = { 2, 4, 5, 2, 4, 5, 2, 3, 8 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            counter++;
        }
    }

    cout << "Number " << target << " occurs " << counter
         << " times in the array.";

    return 0;
}
