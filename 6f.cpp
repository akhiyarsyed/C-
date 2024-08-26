#include <iostream>
#include <string>
using namespace std;

int countCharacters(const string& str) {
    return str.length();
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int count = countCharacters(input);

    cout << "The number of characters in the string: " << count << endl;

    return 0;
}
