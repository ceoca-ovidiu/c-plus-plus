//Write a recursive C++ method which returns the smallest character of a number passed as parameter
#include <iostream>

using namespace std;


int minim(int x, int min = 9) {

    if (x == 0)
        return min;
    else {
        if (x % 10 <= min) {
            min = x % 10;
            return minim(x / 10, min);
        } else
            return minim(x / 10, min);
    }

}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n < 0){
        cout << "The smallest character of the number " << n << " is " << minim(-n);
    }else{
        cout << "The smallest character of the number " << n << " is " << minim(n);

    }
    return 0;
}
