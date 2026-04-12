#include<iostream>
#include<stack>
using namespace std;
int main (){

    int arr[]={ 1,2,3,4,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    stack<i
    nt>st;
    for( int i=0;i<n;i++){
        st.push(arr[i]);
    }
    for( int j=0;j<n;j++){
        arr[j]=st.top();
        st.pop();
    }
    for ( int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
