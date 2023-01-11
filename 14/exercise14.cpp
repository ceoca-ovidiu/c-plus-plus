//Write a recursive C++ method which returns the biggest character of a number passed as parameter
#include <iostream>

using namespace std;


int maxim(int x, int max) {

    if (x == 0)
        return max;
    else {
        if (x % 10 >= max) {
            max = x % 10;
            return maxim(x / 10, max);
        } else {
            return maxim(x / 10, max);
        }
    }
}


int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "The biggest character of the number " << n << " is " << maxim(-n, 0);
    } else {
        cout << "The biggest character of the number " << n << " is " << maxim(n, 0);
    }

    return 0;
}
