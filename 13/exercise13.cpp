//Write a recursive C++ method which returns the sum of all the characters from a natural number passed as parameter
#include <iostream>

using namespace std;


int sumOfCharacters(int x) {
    if (x > 0) {
        return x % 10 + sumOfCharacters(x / 10);
    } else
        return 0;
}

int main() {

    int n;
    cout << "`Enter a natural number (int): ";
    cin >> n;
    if (n < 0) {
        cout << "The sum of the characters of the number: " << n << " is: " << sumOfCharacters(-n);
    } else {
        cout << "The sum of the characters of the number: " << n << " is: " << sumOfCharacters(n);
    }

    return 0;
}
