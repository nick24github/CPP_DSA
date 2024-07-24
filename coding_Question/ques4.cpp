/*You are given a set of numbers and you can arrange them in any order but this pays a penalty
equal to the sum of the absolute difference between contiguous numbers

You are needed to return the minimum penalty that should be paid 
Input Format
Input 1: Size of the array of integer number(2<input<10001)
Input 2: Integer array(1<=input<=10000)

Example 1:
Input1: 3
Input2: {1,3,2}
Output: 2
*/
#include<iostream>
#include<algorithm>
using namespace std;

int soln(int arr[], int n){
    int sum = 0;
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        sum+=abs(arr[i]-arr[i-1]);
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[1000];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = soln(arr, n);
        cout<<ans<<endl;
    }
    return 0;
}
