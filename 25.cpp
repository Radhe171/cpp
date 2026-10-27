#include <iostream>
using namespace std;

int square(const int& x) {
    return x * x;
}

int main() {
    int x, y;

    cin >> x >> y;

    cout << square(x + y);

    return 0;
}