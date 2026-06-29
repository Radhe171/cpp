#include<iostream>
using namespace std;
int main(){


int num=123;
int mul=1;
    int sum=0;
    int rev=0;
    int coun=0;
    while (num!=0){
    int digit = num%10;
        sum=sum+digit;
         mul=mul*digit;
         rev=rev*10+digit;
        num/=10;
        coun++;
    }
    cout<<"  sum of all digits of integer ="<<sum<<endl;
    cout<<" prod is of all digits of  integer ="<<mul<<endl;
    cout<<" prod-sum of all digits of  integer="<< mul-sum <<endl;
    cout<<"prod+sum of all digits  of integer="<< mul+sum<<endl;
    cout<<"rev  is = "<<rev<<endl;
    cout<<"total number of digits in integer ="<<coun<<endl;
    }
