#include <iostream>
#include <algorithm> 
using namespace std;
long long maxSubarraySum(int arr[], int n) {
    long long sum = 0;
    long long maxii = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxii) {
            maxii = sum;
        }

        
        if (sum < 0) { 
            sum = 0;
        }
    }
    return maxii;
}

int main() {
    int n;
cin>>n; 
int arr[n]; 
 for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
cout << "Maximum Subarray Sum: " << maxSubarraySum(arr, n) << endl;
return 0;
}