
// #include <iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[]={6,1,2,4,3,5};
    
    
//     int n=sizeof(arr) / sizeof(arr[0]);

//     int large
//     =INT_MIN;
//     int seclarge=INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > large) {
//             seclarge = large;
//             large = arr[i];
//         } 
//         else if (arr[i] > seclarge && arr[i] < large) {
//             seclarge = arr[i];
//         }
//     }

//     cout << seclarge;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//    int temp=arr[0];
//     for( int i=0;i<n-1;i++){
//         arr[i]=arr[i+1];


//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }





// #include<iostream>
// using namespace std;
// int main ( ){
//     int arr[]={ 1,0,2,0,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int start=0;
//      int end=n-1;

//      for( int i=0;i<n-1;i++){
//         if(arr[start]!=0){
//             start++;
//         }else if (arr[end]==0){
//             end--;
//         }else {
//             swap(arr[start],arr[end]);
        
//         start++;
//         end--;}
            
            
        
//      }
//      for( int i=0;i<n;i++){
//         cout<<arr[i];
//      }
//      return 0;
// }



// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[]={ 0,1,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     for( int k=0;k<n;k++){
//         cout<<arr[k];
//     }
// }







