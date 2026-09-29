#include<iostream>
using namespace std ;
// int main(){
//     int arr[]={ 64,1,3,65};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int minn=0;

//     for( int i=0;i<n;i++){
//         minn=i;
//        for( int j=i+1;j<n;j++){
//         if ( arr[minn]>arr[j]){
//             arr[minn]=arr[j];
//             minn=j;
//         }

//        }
//     }
//     for ( int i=0;i<n;i++){
//         cout<<arr[i];
//     }


// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {64, 1, 3, 65};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n - 1; i++) {
//         int minn = i;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minn]) {
//                 minn = j;
//             }
//         }

//          temp = arr[minn];
//         arr[minn] = arr[i];
//         arr[i] = temp;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// int main()
// {
// int arr[]={1,2,5,6,7,8 };
// int n=sizeof(arr)/sizeof( arr[0]);



// for (int i=0;i<n-1;i++){
//       int  min=i;
//       for( int j=i+1;j<n;j++){      // slection sort 
//           if( arr[j]<arr[min]){
//               min=j;
//           }
//       }
//       swap(arr[i],arr[min]);
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
    

// }



//  void bubble_sort( int  arr[] ,int n){
//   for ( int i =0 ; i<n-1 ; i++){
    
//   for ( int j=0;j<n-i-1;j++){
//     if ( arr[j]> arr[j+1]){
//     swap( arr[j],arr[j+1]);

//   }
//   }
// }                                                   // bubble sorting 

//   for ( int i=0;i<n ;i++){
//     cout<<arr[i]<<" ";
//   }

// }




//  void insertion_sort( int arr[],int n){
//   for ( int i=1;i<n;i++){
//     int j=i;
//     while ( j>0&&arr[j-1]>arr[j])
//     { 
//       swap( arr[j-1],arr[j]);
//       j--;
//       }   
//   }
//  }                                          // insertion sort 
 
// int main (){
//   int arr[]={2,3,5,6,7 };
//   int n = sizeof(arr)/sizeof(arr[0]);
//   insertion_sort(arr,n);

//   for ( int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }

// //     bubble_sort( arr,n);
//     return 0;
// }







