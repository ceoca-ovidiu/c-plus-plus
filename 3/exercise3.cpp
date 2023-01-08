//Write a C++ method called primeDiff which receives as the only parameter, n, a natural number with max 9 characters and return the minimum diff p2-p1 where p1 and p2 are prime numbers and p1 ≤ n ≤ p2.
//Example : n = 28 p1 = 23 and p2 = 29 => result = 6;
#include <iostream>

using namespace std;

// check if the number si prime or not
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

int primeDiff(int n) {

    int p1, p2;
    // validation variable
    int ok = 0;
    int nCopy = n;
    while (ok == 0) {
        if (prim(nCopy)) {
            p1 = nCopy;
            ok = 1;
        } else
            nCopy++;
    }
    int ok1 = 0;
    cout << "The prime numbers are ";
    cout << p1 << " ";
    while (ok1 == 0) {
        if (prim(n)) {
            p2 = n;
            ok1 = 1;
        } else
            n--;
    }
    cout << p2 << endl;
    cout << "The diff is " << p1 - p2;
    return p1 - p2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    primeDiff(n);
    return 0;
}
