// Check if the number is palindrome or not
#include <iostream>

using namespace std;

int checkPalindrome(int x) {
    int inv = 0;
    while (x != 0) {
        inv = inv * 10 + x % 10;
        x = x / 10;
    }
    return inv;
}


int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (checkPalindrome(n) == n)
        cout << "The number " << n << " is palindrome";
    else
        cout << "The number " << n << " is not palindrome";


    return 0;
}
