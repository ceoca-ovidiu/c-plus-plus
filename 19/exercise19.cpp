//Write a C++ method which receives two numbers as parameters and return the concatenation of the numbers
#include <iostream>

using namespace std;


int concat(int x, int y) {

    if (x < 0 && y > 0) {

        int k = 0;
        int copyY = y;
        while (y != 0) {
            y = y / 10;
            k++;
        }
        for (int i = 1; i <= k; i++) {
            x = x * 10;
        }
        return x - copyY;

    } else if (x < 0 && y < 0) {
        int k = 0;
        int copyY = -y;
        while (y != 0) {
            y = y / 10;
            k++;
        }
        for (int i = 1; i <= k; i++) {
            x = x * 10;
        }
        return x - copyY;
    } else if (x == 0) {
        return y;
    } else if (y == 0) {
        return x * 10;
    } else {
        int k = 0;
        int copyY = y;
        while (y != 0) {
            y = y / 10;
            k++;
        }
        for (int i = 1; i <= k; i++) {
            x = x * 10;
        }
        return x + copyY;
    }

}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "The concatenation of number " << a << " with number " << b << " is: " << concat(a, b);


    return 0;
}

