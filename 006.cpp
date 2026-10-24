#include<iostream>
using namespace std;
int main(){
    int x=9;
    const int *z=&x;
x=56;
cout<<z;


}