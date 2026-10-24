#include<iostream>
#include<algorithm>
using namespace std;
int main(){
//     int data[]={50,30,40,10,20};
//     sort(&data[2],&data[5]);
//     for( int i=0;i<5;i++){              
//         cout<<data[i]<<" ";        // output is 50 30 10 20 40 ;
//     }
//     return 0;




// int data[]={50,30,40,10,20};
//     sort(&data[1],&data[4]);
//     for( int i=0;i<5;i++){        // 50 10 30 40 20       
//         cout<<data[i]<<" ";
//     }
//     return 0;

    int data[]={50,30,40,10,20};
    sort(&data[0],&data[2]);
    for( int i=0;i<5;i++){                  // 30 40 50 10 20         
        cout<<data[i]<<" ";
    }
    return 0;
}

