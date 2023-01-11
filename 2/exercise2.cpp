//Write a C++ method that print the biggest number that can be written with the numbers of an entered natural number

#include <iostream>

using namespace std;

void getBiggestNumber(int x) {
    int nr = 0;
    int copy_x = x;

    // find the length of the number
    while (copy_x != 0) {
        nr++;
        copy_x = copy_x / 10;
    }

    // create an array with the length of nr
    int a[nr], i = 1;

    // add each character of the number to the array
    while (x != 0) {
        a[i] = x % 10;
        x = x / 10;
        i++;
    }

    for (int i = 1; i < nr; i++) {
        for (int j = 1; j < nr - i; j++) {
            if (a[j] > a[j + 1]) {
                int aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }

    // print the array
    for (int i = nr; i >= 1; i--) {
        cout << a[i];
    }
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;
    getBiggestNumber(number);
    return 0;
}
