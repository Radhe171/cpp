// #include<iostream>
// using namespace std;

//  bool binaryArray(int arr[],int n , int key )
// {
//     int s=0;
//     int e=n-1;
   
//     while(s<=e){
//          int mid=(s+e)/2;
//         if(arr[mid]==key ){
//             return true  ;


//         }
//         else if ( arr[mid]<key){
//             s=mid+1;
             
//         } else if ( arr[mid]>key){
//              e=mid-1;
//         }


//     }
//     return false ;
    
// }
int main(){
int arr[]={ 1,2,3,4,5,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
int key=5;
cout<<binaryArray(arr,n,key);
}


// int binaryArray(int arr[],int n , int key )
// {
//     int s=0;
//     int e=n-1;
   
//     while(s<=e){
//          int mid=(s+e)/2;
//         if(arr[mid]==key ){
//             return mid  ;


//         }
//         else if ( arr[mid]<key){
//             s=mid+1;
             
//         } else if ( arr[mid]>key){
//              e=mid-1;
//         }


//     }
//     return 0;
    
// }
// int main(){
// int arr[]={ 1,2,3,4,5,6,7};
// int n=sizeof(arr)/sizeof(arr[0]);
// int key=5;
// cout<<binaryArray(arr,n,key);


// }