// Insert element into a vector on a specified position
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
    cout << "Enter the element that needs to be inserted: ";
    cin >> e;
    int p;
    cout << "Enter the position where element " << e << " should be inserted: ";
    cin >> p;

    if (p < 1) {
        cout << "You entered an invalid position and the position will be changed to 1" << endl;
        p = 1;
    }

    if (p > n) {
        cout << "You entered an invalid position and the position will be changed to " << n + 1 << endl;
        p = n + 1;
    }

    n = n + 1;

    for (int i = n; i > p; i--) {
        a[i] = a[i - 1];
    }

    a[p] = e;

    cout << "The updated array is now ";

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
