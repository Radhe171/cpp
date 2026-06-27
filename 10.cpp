#include <iostream>
using namespace std;

int main() {
    int number = 567;
    int rev = 0;    // initialize rev

    int temp = number;   // store original number

    while (temp > 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    cout << "A rev of number is = " << rev << endl;

    return 0;
}
