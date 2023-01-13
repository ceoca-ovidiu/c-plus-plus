// Write a recursive C++ method which return the smallest even character of a natural number passed as parameter
#include <iostream>

using namespace std;


int minim(int x, int min = 9);

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    int evenChar = minim(n);
    if (evenChar == 9) {
        cout << "The number " << n << " does not have even characters";
    } else {
        cout << "The smallest even character of number " << n << " is " << evenChar;
    }

    return 0;
}

int minim(int x, int min) {

    if (x == 0)
        return min;
    else {
        if ((x % 10) % 2 == 0) {
            if (x % 10 <= min) {
                min = x % 10;
                return minim(x / 10, min);
            } else
                return minim(x / 10, min);
        } else
            return minim(x / 10, min);
    }
}

