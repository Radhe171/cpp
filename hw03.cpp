#include<iostream>
using namespace std;
int s( int x){
   int y=    x*x ;
   return y;           // square

}

int even_odd(int x ){
   if ( x%2==0){
      cout<< "even";         // even ||  odd
   }else cout<<"odd";
   return 0;

}
int maxx(int x ,int y){
   if ( x<y){
      cout<<"y is maximum"<<endl;
   } else {
      if ( x>y){
         cout<<" x is maximum"<<endl;         // maximum
      } else { 
         cout<<" both are equal"<<endl;
      }
   }
   return 0;
}



int fac(int x){
   int fact=1;
   for ( int i=1;i<=x;i++){
      
      fact = fact*i;
   }
   return fact ;
}

// int swapp( int x,int y){
  
//    swap(x,y);
//    cout<< " x is :-"<< x << endl;
//    cout<< " y is a :-" <<y<<endl;
//    return 0;

   
   
// } 
   

int main(){
     int x=7;
     int y =8;
     int z=0;
     int j=2;
     cout<<"square of the num is :"  <<  s(x)<<endl;
     cout <<even_odd(x)<<endl;
     cout << maxx(x,y);
   cout<<fac(x);
   // cout<<swapp(z,j);

}
