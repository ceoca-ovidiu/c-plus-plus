// Write a C++ method with one parameter, n, that prints the closest number to n which is the factorial of another value
#include <iostream>

using namespace std;


void fact(int n) {
    int ok = 0;
    int k = 1;
    int f1, f2;
    while (ok == 0) {
        int p = 1;
        for (int i = 1; i <= k; i++) {
            p = p * i;
        }

        if (p >= n) {
            f2 = p;
            f1 = p / k;
            ok = 1;
        } else {
            k++;
        }

    }

    cout << "The closest number to " << n << " which is also the factorial of number " << k << " is: ";
    if ((n - f1) == (f2 - n))
        cout << f1 << " " << f2;

    if ((n - f1) > (f2 - n)) {
        cout << f2;
    } else {
        cout << f1;
    }

}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    fact(n);


    return 0;
}

