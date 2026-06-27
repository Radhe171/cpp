#include <iostream>
using namespace std;
int main(){
    int count =0;
    int n;
    cout<< " enter the number "<<endl;
    cin>>n;
    if (n<=1){
        cout<<"number is not"<<endl;
    }
    if(n==2||n==3){
        cout << n<<" number is prime "<<endl;
    }
    for( int i=4;i<=n;i++){
        if(n%i==0){
            count++;
        } 
    }
        // if(count>=2){
        //     cout <<"number is not prime"<<endl;
            
        // }else{
        //     cout<<"number is prime "<<endl;
        // }
        cout<<count<<endl;
    }

    
