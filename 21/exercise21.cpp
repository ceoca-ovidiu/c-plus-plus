//Disply in ascending order all the numbers from a specific interval which have all the characters equal
#include <iostream>

using namespace std;

int cifre(int x) {
    int t = 0;
    int copie_x = x;
    while (copie_x != 0) {
        t++;
        copie_x = copie_x / 10;
    }
    int c[t];
    int i = 0;
    while (x != 0) {
        i++;
        c[i] = x % 10;
        x = x / 10;

    }
    int ok = 1;
    i = 1;
    while (ok == 1 && i < t) {
        if (c[i] == c[i + 1])
            i++;
        else
            ok = 0;
    }

    if (ok == 1)
        return 1;
    else
        return 0;
}

void printNumbers(int a, int b) {

    if (a == 0 && b == 0) {
        cout << "The interval is [0, 0]. There are no numbers inside it except 0";
    } else if (a > 0 && b > 0 && a > b) {
        cout << "The numbers with same characters from the interval [" << a << ", " << b << "] are: ";
        for (int i = a; i <= b; i++) {
            if (cifre(i))
                cout << i << " ";
        }
    } else if (a == b && a % 11 == 0) {
        cout << "The interval is [" << a << ", " << b << "] so the only number is: " << a;
    } else if (a == b && a % 11 != 0) {
        cout << "The interval is [" << a << ", " << b << "] so there are no numbers with equal characters inside";
    } else if (a > 0 && b < 0) {
        cout << "The numbers with same characters from the interval [" << a << ", " << b << "] are: ";
        for (int i = a; i >= b; i--) {
            if (cifre(i))
                cout << i << " ";
        }
    } else if (a < 0 && b > 0) {
        cout << "The numbers with same characters from the interval [" << a << ", " << b << "] are: ";
        for (int i = a; i <= b; i++) {
            if (cifre(i))
                cout << i << " ";
        }
    } else if (a < 0 && b < 0 && a > b) {
        cout << "The numbers with same characters from the interval [" << a << ", " << b << "] are: ";
        for (int i = a; i >= b; i--) {
            if (cifre(i))
                cout << i << " ";
        }
    } else {
        cout << "The numbers with same characters from the interval [" << a << ", " << b << "] are: ";
        for (int i = a; i <= b; i++) {
            if (cifre(i))
                cout << i << " ";
        }
    }

}


int main() {
    int a, b;
    cout << "Enter the number for the start of the interval: ";
    cin >> a;
    cout << "Enter the number for the end of the interval: ";
    cin >> b;
    printNumbers(a, b);

    return 0;
}
