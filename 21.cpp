
#include<iostream>
using namespace std;

int main() {
    int n;
 cin >> n;
 int value = 'A'+(n-1);
    
    for(int i; i ; i--) {        // E
    for(char j = i; j <= n; j++) {         // D E
                                           // C D E 
            cout << j << " ";              // B C D E
        }                                  // A B C D E 
        cout << endl;
    }
    return 0;
}
