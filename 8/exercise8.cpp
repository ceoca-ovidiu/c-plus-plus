//Given n (natural number), display in ascending order, the array elements of Fibonacci smaller or equal than n
#include <iostream>

using namespace std;


int main() {
    int n;
    cout << "Enter a number:";
    cin >> n;
    int t1 = 1;
    int t2 = 1;
    int ok = 1;
    if (n <= 0)
        cout << "There are no other elements";
    else {
        cout << t1 << " " << t2 << " ";
        while (ok == 1) {
            int t3 = t1 + t2;
            t1 = t2;
            t2 = t3;

            if (t3 <= n) {
                cout << t3 << " ";
            } else
                ok = 0;
        }
    }
    return 0;
}
