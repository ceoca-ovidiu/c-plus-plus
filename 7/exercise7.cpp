//From a given array, determine the sum of all the prime numbers from that array
#include <iostream>

using namespace std;

int prim(int x) {
    int div = 1;
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0)
            div++;
    }
    if (div == 1)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    while (n < 1 && n > 1000) {
        cout << "alta valoare pentru n : ";
        cin >> n;
    }
    int a[n];
    for (int i = 1; i <= n; i++) {
        cout << "The number on the " << i << " position is: ";
        cin >> a[i];
    }
    int S = 0;
    for (int i = 1; i <= n; i++) {

        if (prim(a[i])) {

            while (a[i] != 0) {

                S = S + a[i] % 10;
                a[i] = a[i] / 10;

            }

        }
    }

    cout << "The sum is " << S;
    return 0;
}
