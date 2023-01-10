//Write a program that reads from the keyboard a natural number different from 0 with maximum of 9 characters and build a two-dimensional square matrix with the dimension of the length of n filled with the characters of n.
#include <iostream>

using namespace std;


int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    int k = 0;
    int b[k];
    int t = 1;
    while (n != 0) {
        b[t] = n % 10;
        n = n / 10;
        k++;
        t++;
    }
    int a[k][k];
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= k; j++) {

            a[i][j] = n % 10;
            n = n / 10;

        }
    }

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= k; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
