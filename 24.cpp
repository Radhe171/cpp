#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,0,3,4,5 };
    int sum=0;
    int sum2=0;
    
    for ( int i=0;i<5;i++ ){
        sum+=arr[i];
    }
    for( int j=1;j<=5;j++){
        sum2+=j;
    }
    cout<<" missing element is - " <<sum2-sum<<endl;


    
}