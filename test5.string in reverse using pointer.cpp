#include <iostream>
using namespace std;
void reverseString(char* str) {
    char* end = str;
    while (*end) {
        end++;
    }
    end--;
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}
int main() {
    char str[100];  
    cout << "Enter a string: ";
    cin >> str; 
    reverseString(str);  
    cout << "Reversed string: " << str << endl;
    return 0;
}
