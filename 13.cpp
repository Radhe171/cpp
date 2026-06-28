#include<iostream>
using namespace std;
int main(){
    int num=123;
    // int rev=0;
   

    // while(num!=0){
    //     int digit=num%10;
    //     rev=rev*10+digit;
    //     num=num/10;


    // }
    // cout<<"rev is ="<<rev;


    int coun=0;
    while ( num!=0){

    }
  








    
    
    // int sum=0;
    // while ( num!=0){
    //     sum=sum+num%10;
    //     num/=10;
    // }
    // cout<<" sum of digits is ="<<sum;


   
    // while ( num!=0){
    //     mul=mul*num%10;
    //     num/=10;
    // }
    // cout<<"prod is="<<mul;  


    int mul=1;
    int sum=0;
    int rev=0;
    while (num!=0){
        sum=sum+num%10;
         mul=mul*num%10;
         rev=rev*10+num%10;
        num/=10;
    }
    cout<<"  sum of all digits of integer ="<<sum<<endl;
    cout<<" prod is of all digits of  integer ="<<mul<<endl;
    cout<<" prod-sum of all digits of  integer="<< mul-sum <<endl;
    cout<<"prod+sum of all digits  of integer="<< mul+sum<<endl;
    cout<<"rev  is = "<<rev<<endl;

    // cout<<" sum of digits is ="<<sum;


}