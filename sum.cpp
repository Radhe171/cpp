#include<iostream>
using namespace std ;
int main (){
    int num=123;
    int sum=0;
    int prod=1;

    while(num!=0){

       sum =sum+num%10;
prod=prod*num%10;
       num/=10;


    }
    cout<<"numer of digits is "<<sum<<endl;
    cout<<"product is"<<prod<<endl;
    cout<<"product-sum="<<prod-sum<<endl;
}
