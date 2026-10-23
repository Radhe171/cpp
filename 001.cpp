#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
bool compare( char c1,char c2){
    return toupper(c1)<toupper(c2);
}
int main (){
    char arr1[20]="C Course",arr2[20]="C++ Course";
    cout<< lexicographical_compare(arr1 ,arr1+strlen(arr1),arr2,arr2+strlen(arr2),compare);
    return 0;
}