/*There are n farmers in an area. Each farmers owns 'X' number of land. Find the sum of lands
   owned by all the farmers (1 based indexing), The number of land 'X' is the xor operation of
   the land owner by his  previous farmer and his number.
   
   Input Format : One line consist of 'N' which represents the number of farmer in the given 
   area.
   
   Output Format : Print total number of lands owned by n farmer.
   
   Testcase:
   i) n=1
   Output--> 1
   
   ii) n=3
   Output--> 4*/

#include<iostream>
// #include <vector>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     vector<int> v;
//     v.push_back(1);

//     for(int i=2; i<n; i++){
//         v.push_back(v.back()^i);
//     }
//     int sum = 0;
//     for(auto x:v){
//         sum = sum+x;
//     }
//     cout<<sum;
//     return 0;

// }
int main() {
    int n;
    cin >> n; // Input the number of farmers
    
    int total_lands = 0;
    int X = 0; // Initialize X for the first farmer
    
    for (int i = 1; i <= n; ++i) {
        X = X ^ i; // Update X using XOR operation with current farmer's number i
        total_lands += X; // Accumulate total number of lands
    }
    
    cout << total_lands << endl; // Output the total number of lands
    
    return 0;
}