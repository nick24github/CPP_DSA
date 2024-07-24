/*Given an array A[] of positive integer f size N , where each value represent the number of 
Chocolates in a packet. Each packet can have a variable number of chocolates. There are N students
the task is to distribute chocolate packets among M students such that:
Each students get exactly one packet.
The differece between maximum number of chocolates given to a student and minimum number of
chocolates given to a student is minimum.

Example 1: Input:
           N = 8, M = 5
           A = {3, 4, 1, 9, 56, 7, 9, 12}
           Output:
           Explanation : The minimum difference between maximum chocolates and minimum chocolates
           is 9 - 3 = 6 by choosing following M packets:{3, 4, 9, 7, 9}.

Example 2: Input:
           N = 7, M = 3
           A = {7, 3, 2, 4, 9, 12, 56}
           Output: 2

 */
#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
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
        int m;
        cin>>m;
        if(n==0 || m==0)
        return 0;

        sort(arr, arr+n);
        if(n<m){
            return -1;
        }
        int mini_diff = INT_MAX;
        for(int i=0; i+m-1<n; i++){
            int diff = arr[i+m-1]  - arr[i];
            if(diff<mini_diff){
                mini_diff = diff;
            }
        }
        cout<<mini_diff<<endl;

    }
    return 0;
}