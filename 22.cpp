#include<iostream>
using namespace std;

// void A_2d(int arr[][2]) {
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// bool l_s( int arr[][2], int r,int c, int key,int &row, int &column  ){
   
//     for(int i = 0; i < 2; i++) 
//         for(int j = 0; j < 2; j++) {
// if( key==arr[i][j]){
// row=i;
// column=j;
     

//     return true ;

    
// }

//         }
//         return false ;
//         cout << endl;
//     }

int maxx( int arr[][2], int r,int c,int m ){
    int sum=0;
    int maxsum=0;
    for ( int i=0;i<r;i++){

    for( int j=0;j<c;j++){                // sum max finding in a column 
        sum=sum+arr[i][j];
    }
    sum=m;
    if(m>sum){

        return i;
    }
    

    }
}



    
int main() {
    int arr[3][2] = { {1,2}, {3,4},{4,5} };
    int r= sizeof(arr)/sizeof(arr[0]);
    int c=sizeof(arr[0])/sizeof(arr[0][0]);
    int key =3;
    int row=-1;
    int column=-1;
    int m=0;
       cout<< "max sum of column :-"<<maxx(arr,r,c,m)<<"rd"<<endl;
    // cout<<l_s(arr,key,row,column)<<endl;
    // cout<<row<<column;
    
}



    // A_2d(arr); 
    

    
 

