// Delete multiple elements from an array
#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int a[n];

    for (int i = 1; i <= n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    int e;
    cout << "Enter the number of elements you want to delete: ";
    cin >> e;
    if (e < 1) {
        cout << "You entered an invalid number of elements so the variable will be default (1)" << endl;
        e = 1;
    }
    if (e > n) {
        cout << "You entered an invalid number of elements so the variable will be default (" << n << ")" << endl;
        cout << "The array is now empty";
        return 0;
    }
    int p;
    cout << "Enter the first position: ";
    cin >> p;
    if (p < 1) {
        cout << "You entered an invalid position and the position will be changed to 1" << endl;
        p = 1;
    }

    if (p > n) {
        cout << "You entered an invalid position and the position will be changed to " << n + 1 << endl;
        p = n + 1;
    }
    for (int i = p; i <= n; i++) {
        a[i] = a[i + e];
    }

    cout << "The updated array is now ";
    for (int i = 1; i <= n - e; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
