//Write a C++ method which finds the biggest and the smallest character of a natural number sent as parameter. The method will return the results with the help of outputs parameters.
#include <iostream>

using namespace std;


void cifre(int a, int &max, int &min) {

    while (a != 0) {
        int uc = a % 10;
        if (uc >= max)
            max = uc;
        if (uc <= min)
            min = uc;
        a = a / 10;
    }
}

int main() {
    int x;
    cout << "Enter x: ";
    cin >> x;
    int max = 0;
    int min = 9;
    cifre(x, max, min);
    cout << "Maximum is: " << max << " and minim is: " << min;

    return 0;
}
