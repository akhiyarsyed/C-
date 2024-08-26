
#include <iostream>

using namespace std;

int main()

{
    int number;

    cout << "Enter number here --> ";

    cin >> number;

    int square = number * number;

    int sum = 0;

    while (square > 0)

    {
        int lastDigit = square % 10;

        sum = sum + lastDigit;

        square = square / 10;
    }

    if (sum == number)

        cout << "The given number " << number << " is a Neon number";

    else

        cout << "The given number " << number << " is not a Neon number";

    return 0;
}