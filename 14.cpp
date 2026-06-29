#include<iostream>
using namespace std;
int main(){
	int  n=999;
int  sum=0;
int  totalsum=0;
while(n){
	sum=sum+(n%10);
	n=n/10;
}
cout<<"sum is : "<<sum<<endl;
while(sum){
	totalsum=totalsum+(sum%10);
	sum=sum/10;
}
cout<<"totalsum is : "<<totalsum;
}