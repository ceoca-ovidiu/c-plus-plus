// Print if the entered number is prime or not

#include <iostream>

using namespace std;

int prim(int a) {
    int div = 1;
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            div++;
            break;
        }
    }
    if (div == 1)
        cout << "The number is prime";
    else
        cout << "The number is not prime";
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    prim(number);
    return 0;
}

