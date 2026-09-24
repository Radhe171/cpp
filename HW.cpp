 #include<iostream>
 using namespace std;
 int main(){
int num=121;
int temp=num;
int rev=0;
while(num!=0){
   int digit=num%10;
   rev=rev*10+digit;
   num/=10;

}
if(temp==rev){
   cout<<"number is palindrome"<<endl;
} 
else cout<<"number is not palindrome"<<endl;

return 0;

 }
