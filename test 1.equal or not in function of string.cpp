#include <iostream>
#include <cstring> 
class String {
private:
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }
    bool operator==(const String& other) const {
        return strcmp(this->str, other.str) == 0;
    }
    void displayComparison(const String& other) const {
        if (*this == other) {
            std::cout << "Both strings are equal" << std::endl;
        } else {
            std::cout << "Both strings are not equal" << std::endl;
        }
    }
};
int main() {
    String firstString("Apple");
    String secondString("orange");
    firstString.displayComparison(secondString);
    return 0;
}
