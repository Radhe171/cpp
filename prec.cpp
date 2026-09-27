// #include<iostream>

// using namespace std;
// int main (){
//     int arr[]={ 1,2,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int max=arr[0];
//     int secmax=0;

//     for(int i=1;i<n;i++){
//         if( secmax<max){
//             secmax=max;
//             max=arr[i];
//         }


//     }
//     cout<<secmax ;
// }
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){

// int arr[]={ 1,2,3,4};
// int n=sizeof(arr)/sizeof(arr[0]);
// int minn= arr[0];
// int smin=INT_MAX;
// for(int i=1;i<n;i++){
// if( arr[i]< minn){
//      smin=minn;
//    smin=arr[i];
// }else if ( arr[i]>minn && arr[i]<smin ){
//   smin=arr[i];
// }


// }
// cout<<" second min is " <<smin<<endl;
// cout<< " the minn is "<<minn;
// }


#include<iostream>
using namespace std ;
int main(){
  int arr[]={ 1,1,2,2,2,5,5,5,8};
  int n=sizeof( arr)/sizeof(arr[0]);
  int target=5;
  int start=0;
  int end=n-1;
   int freq=-1;
   int left_accurance=-1;
   int right_accurance=-1;
   while(start<=end){
    int mid =start+( end-start)/2;

     if(arr[ mid]==target){
    left_accurance=mid;
      end=mid-1;
      
      
    }else if (arr[mid]<target ){
      start=mid+1;
   
      
    }else{
      end=mid-1;
    }
   
    
   }
    cout<<left_accurance<<endl;
    start=0;
    end=n-1;


while ( start<=end){
   int mid =start+( end-start)/2;
  if( arr[mid]==target){
    right_accurance=mid;
    start=mid+1;

  }
  else if (arr[mid]<target){
    start=mid+1;

  }else{
    end=mid-1;
  }
}
cout<<right_accurance<<endl
cout<< "freq is  "<<right_accurance-left_accurance+1;
}









