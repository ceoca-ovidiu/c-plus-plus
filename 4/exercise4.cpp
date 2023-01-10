//From an n elements vector (natural numbers), delete all the elements that are prime
#include <iostream>

using namespace std;

// the function identifies if the number is prime or not
int prim(int x) {
    int div = 1;
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            div++;
            break;
        }
    }
    if (div == 1 && x != 1)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++) {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (prim(a[i]))
            a[i] = 0;
    }
    int nr = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            for (int j = i; j <= n; j++) {
                a[j] = a[j + 1];
            }
            nr++;
        }
    }

    for (int i = 1; i <= n - nr; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

