// Calculate the factorial of a number n, recursively
#include <iostream>

using namespace std;

int fact(int x) {
    if (x >= 1)
        return x * fact(x - 1);
    else
        return 1;
}


int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "The factorial of number " << n << " is: " << fact(n);
    return 0;
}
