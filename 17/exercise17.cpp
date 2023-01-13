// Write a C++ method that returns the sum of factorials of all characters of a number.
#include <iostream>

using namespace std;

int fact(int t) {
    int p = 1;
    for (int i = 1; i <= t; i++) {
        p = p * i;
    }
    return p;
}

int sumFact(int n) {
    int s = 0;
    while (n != 0) {
        s = s + fact(n % 10);
        n = n / 10;
    }
    return s;
}


int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n < 0) {
        cout << "The number is lower than 0 so the number that will be processed is " << -n << endl;
        cout << "The sum of factorials of number " << -n << " is " << sumFact(-n);
    } else {
        cout << "The sum of factorials of number " << n << " is " << sumFact(n);
    }

    return 0;
}
