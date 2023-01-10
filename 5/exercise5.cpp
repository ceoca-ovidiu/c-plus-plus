//Write a C++ program that reads from keyboard a natural number (except 0) n. Build a two-dimensional block of n dimension where each element is equal to the last character  of indexes product
#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    int a[n][n];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = (i * j);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = a[i][j] % 10;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
