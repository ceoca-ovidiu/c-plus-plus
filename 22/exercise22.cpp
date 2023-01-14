// Print the characters from a number, recursively
#include <iostream>

using namespace std;

void cifre(int x) {

    if (x > 0) {
        cout << x % 10 << " ";
        cifre(x / 10);
    } else
        cout << " ";
}


int main() {

    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The characters of number " << n << " are: ";
    if (n < 0) {
        cifre(-n);
    } else if (n == 0) {
        cout << "0";
    } else {
        cifre(n);
    }

    return 0;
}
