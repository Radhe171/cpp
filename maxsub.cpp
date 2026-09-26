#include<iostream>
#include<math.h>
using namespace std ;
    int maxSubarraySum(int arr[], int n, int k) {
        if (n < k) return -1;

        int left = 0, right = 0;
        int sum = 0;
        int maxi = 0;

        while (right < n) {
            sum += arr[right];

            if (right - left + 1 == k) {
                maxi = max(maxi, sum);
                sum -= arr[left];
                left++;
            }
            right++;
        }
          
        return maxi;
    }
int main (){
    int arr[]={1,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
   int s= maxSubarraySum(arr,n,k);
    cout<<s;
    
}

