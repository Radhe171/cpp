#include<iostream>
using namespace std ;
int main (){
    int num=123;
    int sum=0; 
    
    while(num!=0){
    
       sum =sum+num%10;
       num/=10;
       

    }
    cout<<"numer of digits is "<<sum<<endl;
}