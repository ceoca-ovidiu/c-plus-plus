// It is given a vector with n elements, natural numbers. Remove from the vector all even elements
#include <iostream>

using namespace std;


int main() {

    int n;
    cout << "Enter the length of the vector a: ";
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++) {
        cout << "a[" << i << "] :";
        cin >> a[i];
    }
    int nr = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
            for (int j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            nr++;
        }
    }
    cout << "The vetor without even elements is [";
    for (int i = 1; i <= n - nr; i++) {
        cout << a[i] << " ";
    }
    cout << "]";
    return 0;
}
