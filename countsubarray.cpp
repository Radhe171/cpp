#include <iostream>
using namespace std;

int countSubarrays(int arr[], int n, int k) {
    int start = 0, end = 0;
    int sum = 0;
    int count = 0;

    while (end < n) {
        sum += arr[end];

           while (sum > k && start <= end){
            sum -= arr[start];
            start++;
        }

        if (sum == k){
            count++;
        }

        end++;
    }
    return count;
}

int main() {
    int k, n;
    cout << "Enter the value of k: ";
         cin >> k;

    cout << "Enter the size of array: ";
          cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
          for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = countSubarrays(arr, n, k);
             cout << "The number of subarrays with sum == " << k << " is: " << ans << endl;

    return 0;
}

