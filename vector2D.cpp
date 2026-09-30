#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>>arr={  
        {1,2,3,4},
        {3,4,5,6},
        {1,2,3,4},
        {3,4,56,7}

    };
    int sum=0;

    for( int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            
            sum+=arr[i][j];
        }
    }
    cout<<sum;
    
    return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<vector<int>> arr = {
//         {1,2,3,4},
//         {3,4,5,6},
//         {1,2,3,4},
//         {3,4,56,7}
//     };

//     int sum = 0;

//     for(int i = 0; i < arr.size(); i++) {
//         for(int j = 0; j < arr[i].size(); j++) {
//             sum += arr[i][j];
//         }
//     }

//     cout << sum;

//     return 0;
// }
