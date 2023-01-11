//Write a recursive C++ method which return the number of zeros in a number passed as parameter
#include <iostream>

using namespace std;


int zeros(int x) {

    // exit condition
    if (x == 0)
        return 0;

    // running condition
    if (x % 10 == 0)
        return 1 + zeros(x / 10);
    else
        return zeros(x / 10);

}

int main() {

    int n;
    cout << "Enter a number (int): ";
    cin >> n;
    cout << "The number of zeros in number " << n << " is: " << zeros(n);
    return 0;
}
