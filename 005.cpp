#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    int size =3,c=65;
    vector<char> v( size,'A');
    for ( int i=1;i<=2;i++){
        v.push_back(65+i);
    }
        v.resize(10,'Z');
        v.resize(8);
        for( int i=0;i<v.size();i++){
         cout<<v[i];}
         return 0;


    }

