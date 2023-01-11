//The factorial of an entered number
#include <iostream>

using namespace std;

int fact(int n) {
    int p = 1;
    for (int i = 2; i <= n; i++) {
        p = p * i;
    }
    return p;
}


int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The factorial of number " << n <<" is: " << fact(n);

    return 0;
}
