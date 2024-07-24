/*A function accept an array and length , implement the function to find the maximum element 
of array and print maximum element and its index .

The maximum element and its index should be printed in next line.
Condition:
1)Array index start with 0.
2)Maximum element and its index should be saperated by new line
3)Assume their is only 1 maximum element in array.

Sample Input:
Input: 1,2,3,4,5,6,7
Output: 7
        6
Example 2: 23 45 82 71
Output: 82
        2
*/
#include<iostream>
#include <climits>
using namespace std;

void max_ele(int arr[], int n){
    int maxi = INT_MIN;
    int idx = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            idx = i;
        }
    }
    cout<<(maxi)<<"\n"<<idx<<endl;

}

int main(){
    // int arr[] ;
    // cout<<"Enter the value of array :"<<endl;
    // cin>>arr;
    int arr[6]={52, 36, 98, 102, 14, 78};
    max_ele(arr, 6);

    return 0;

}