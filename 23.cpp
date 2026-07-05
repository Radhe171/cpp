#include <iostream>
#include <utility>
using namespace std;





// int l_s( int arr[][3], int n , int m, int key  ){



//     for ( int i=0;i<n ;i++){
//         for ( int j=0;j<m;j++){
            
            

        
//         if ( key==arr[i][j]){
//                 cout<<"element found at index "<<"["<<i<<"]"<<"["<<j<<"]";
//     }
//     else{ 
//         cout<<"elemnt not found "<<endl;
//         return 0;
//     }
// }
// }
//                 cout <<endl;
// }


// int total_sum(int arr[][3], int rows, int cols, int &row) 
// {   
//     int maxSum = 0;  
//     for(int i = 0; i < rows; i++) {
//         int sum = 0;

//         for(int j = 0; j < cols; j++) {
//             sum += arr[i][j];
//         }

//         if(sum > maxSum) {
//             maxSum = sum;
// 			row=i;
//         }
// 	}
	
//     return maxSum;
// }

// int main() {
//     int arr[4][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10, 11, 12}
//     };
// 	int roww=-1;

//     int ans = total_sum(arr, 4, 3, roww);

//     cout << "Max Row Sum = " << ans<< endl;
//     cout << "Row Index   = " << roww<< endl;

//     return 0;
// }

// int total_sum(int arr[][3], int rows, int cols, int &colss ) 
// {   
//     int maxSum = 0;  
//     for(int i = 0; i < cols; i++) {
//         int sum = 0;

//         for(int j = 0; j < rows; j++) {
//             sum += arr[j][i];
//         }

//         if(sum > maxSum) {
//             maxSum = sum;
// 			colss =i;
//         }
// 	}
	
//     return maxSum;
// }

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
        
//     };
// 	int colss=-1;

//     int ans = total_sum(arr, 4, 3, colss );

//     cout << "Max cols Sum = " << ans<< endl;
//     cout << "cols Index   = " << colss<< endl;

//     return 0;

// }



// int sum( int arr[][3],int &n,int& m ,int  &dsum  ){
   
    
//     for ( int i=0;i<n;i++){
//         for( int j=0;j<m;j++){
//             if ( i==j){
//                 dsum+=arr[i][j];
//             }
//         }
//     }
//     dsum-=arr[n/2][n/2];

// }



// int summ( int arr[][3],int n,int m,int &d2sum )
// { for ( int i=0;i<n;i++){
//         for( int j=0;j<m;j++){
//             if ( i==n-i-1){

//                 d2sum+=arr[i][j];
//             }
//         }
//     }
//     d2sum-=arr[n/2][n/2];
// }





int main() {
    // int arr[3][3] = {
    //     {7, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 2}
        
    // };
    int key ;
    cout<<" enter the target value ";
    cin>>key;
	// int dsum=0;
    // int d2sum=0;
    cout<< sizeof(key);

    // int n=sizeof(arr)/sizeof(arr[0]);
    // int m=sizeof( arr[0])/sizeof(arr[0][0]);

    //  l_s(arr,n,m,key);
      
    // int ans = sum(arr,n, m,dsum );
    // int ans2=summ(arr,n,m,d2sum);
    // int ans3=dsum+d2sum;


    
    // cout<<"diagonl 1 sum is ="<<dsum;
    // cout<<" Diagonl 2 sum  is ="<<d2sum<<endl;
    // cout << " and both sum is =" <<ans3;


    

    return 0;

}




