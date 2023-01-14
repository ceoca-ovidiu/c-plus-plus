// Insert many elements into a vector on specified positions

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
    cout << "Enter the number of elements that must be inserted: ";
    cin >> e;
    if (e < 1) {
        cout << "You entered an invalid number of elements so the variable will be default (1)";
        e = 1;
    }
    int b[e];
    for (int i = 1; i <= e; i++) {
        cout << "element: " << i << " : ";
        cin >> b[i];
    }

    int p;
    cout << "Enter the position where should begin the inserting process: ";
    cin >> p;

    if (p < 1) {
        cout << "You entered an invalid position and the position will be changed to 1" << endl;
        p = 1;
    }

    if (p > n) {
        cout << "You entered an invalid position and the position will be changed to " << n + 1 << endl;
        p = n + 1;
    }
    n = n + e;

    for (int i = n; i > p; i--) {
        a[i] = a[i - e];
    }
    int j = 1;
    for (int i = p; i < p + e; i++) {
        a[i] = b[j];
        j++;
    }

    cout << "The updated array is now ";

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }


    return 0;
}
