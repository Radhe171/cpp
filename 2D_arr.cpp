#include <iostream>
using namespace std;

// int main() {

//     int arr[3][3]={{ 1,2,3},{ 0,4,5},{ 6,7,8}};
//     int sum=0;
//     for( int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         for( int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
//             cin>>arr[i][j];
//         }
//     }
//      for( int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         for( int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
//            cout<<" element at index"<<j<<i<<endl;
//             cout<<arr[i][j]<<endl;
//         sum+=arr[i][j];
//         }
//     }
//     cout<<sum;
    
    
//     return 0;
// }

// int main(){
  
//     int arr[3][3]={{ 1,2,3},{ 0,4,5},{ 6,7,8}};
//     int row=sizeof( arr)/sizeof(arr[0]);
//     int colm=sizeof(arr[0])/sizeof(arr[0][0]);
//     int maxii=arr[0][0];
//     for( int i=0;i<row;i++){
//         for( int j=0;j<colm;j++){
//             if ( maxii<arr[i][j]){
//                 maxii=arr[i][j];
//             }
//         }
//     }
//     cout<<maxii;
//     return 0;
// }


// int main(){
//    int arr[3][3]={{ 1,2,3},{ 0,4,5},{ 6,7,8}};
//    int nrow=sizeof( arr)/sizeof( arr[0]);
//    int ncolm=sizeof( arr[0])/sizeof( arr[0][0]);
//    for( int colm=0;colm<ncolm;colm++){
//     if( colm%2==0){
//         for( int row=0;row<nrow;row++){
            // cout<<arr[row][colm];               // wave ptint 
//         }
//     }else{
//         for( int row=nrow-1;row>=0;row--){
//             cout<<arr[row][colm];
//         }
//     }
//    }
//    return 0;
// }

// int main(){
//      int arr[3][3]={{ 1,2,3},{ 0,4,5},{ 6,7,8}};
//    int nrow=sizeof( arr)/sizeof( arr[0]);
//    int ncolm=sizeof( arr[0])/sizeof( arr[0][0]);
//    for ( int row=0;row<nrow;row++){
//     for ( int colm=row+1;colm<ncolm;colm++){
//         swap(arr[row][colm],arr[colm][row]);
//     }                                           // transpose of matrix 
    
//    }
//      for ( int row=0;row<nrow;row++){
//     for ( int colm=0;colm<ncolm;colm++){
//         cout<<arr[row][colm];}
//         cout<<endl;
//     }
//     return 0;
    
// }


// int main(){
//       int arr[3][3]={{ 1,2,3},{ 0,4,5},{ 6,7,8}};
//       int nrow=sizeof( arr)/sizeof( arr[0]);
//    int ncolm=sizeof( arr[0])/sizeof( arr[0][0]);
// int maxii=0;
// for ( int row=0;row<nrow;row++){
//     int sum=0;
//     for( int colm=0;colm<ncolm;colm++){
//         sum+=arr[row][colm];                // max row sum ;;;;;;
        
        
//     }
//     if( maxii<sum){
//         maxii=sum;
//     }


// }
// cout<<maxii;


// }


// int main( ){
//     int arr[2][2]={{ 1,2},{ 3,4}};
//     int nrow=sizeof(arr)/sizeof(arr[0]);
//     int ncolm=sizeof(arr[0])/sizeof(arr[0][0]);
//     int n=ncolm;
//     for ( int row=0;row<nrow;row++){
//         for( int colm=0;colm<row;colm++){
//             swap( arr[row][colm],arr[colm][row]);
                                                        //rotate
//         }
//     }
//     for( int i=0;i<n;i++){
//         int left=0,right=n-1;
//         while( left<right){
//             swap( arr[i][left],arr[i][right]);
//             left++;
//             right--;
//         }
//     }
//     for( int i=0;i<nrow;i++){
//         for( int j=0;j<ncolm;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }

// int main( ){

//     int arr[2][2]={{ 1,2},{ 3,4}};
//     int nrow=sizeof(arr)/sizeof(arr[0]);
//     int ncolm=sizeof(arr[0])/sizeof(arr[0][0]);

// for( int row=0;row<nrow;row++){
//     for( int colm=row+1;colm<ncolm;colm++){
//         swap( arr[row][colm],arr[colm][row]);
//     }                                                  //if matrix has nxn
// }
//   for( int i=0;i<nrow;i++){
//         for( int j=0;j<ncolm;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// int main(){


//  int arr[2][3]={{ 1,2,3},{ 3,4,5}};
//     int nrow=sizeof(arr)/sizeof(arr[0]);
//     int ncolm=sizeof(arr[0])/sizeof(arr[0][0]);
//     int arr2[ncolm][nrow];

//     for( int row=0;row<nrow;row++){
//         for ( int colm=0;colm<ncolm;colm++){       // if matrix has nxm;;;;;
//             arr2[colm][row]=arr[row][colm];
//         }
//     }
//     for( int i=0;i<ncolm;i++){
//         for( int j=0;j<nrow;j++){
//             cout<<arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

