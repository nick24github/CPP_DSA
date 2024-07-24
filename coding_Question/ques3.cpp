/*You have given an integer number N determine the number of bricks needed to make a house of 
    bricks of N level.
    
Input: 1 Output: 2
Input: 3 Output: 15
*/
/*---This is a builtin function using */
// #include<iostream>
// #include <cmath>
// using namespace std;

// int bricks_needed(int N) {
//     if (N < 1) {
//         return 0;
//     } else {
//         return pow(2, N + 1) - 1;
//     }
// }

// int main() {
//     // Examples
//     cout << bricks_needed(1) << endl;  // Output: 2
//     cout << bricks_needed(3) << endl;  // Output: 15
    
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = n*(3*n+1)/2;
    cout<<ans;
    return 0;
}