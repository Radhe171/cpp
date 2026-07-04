#include<iostream>
using namespace std;
void sortZeroesAndOne(int* arr, int size)
{    
   int start=0,end=size-1;
   while ( start<end){
       while (arr[start] ==0 &&start<end){
           start++;

       }
       while ( arr[end]==1&&start<end){
           end--;
       }
       if( start<end){
           swap(arr[start],arr[end]);
           start++;
           end--;
       }
   } 
   
}
int main (){
int arr[]={ 1,0,1,0,1,1};
int sizee= sizeof(arr)/sizeof(arr[0]);
sortZeroesAndOne( arr , sizee);
 for ( int i=0;i<sizee;i++){
    cout<<arr[i];
 }

}

