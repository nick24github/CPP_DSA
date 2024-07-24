/*A startup wants to expand their empire so the CEO decided to purchase a plot at various locations.
He has already figured out some plots and now he is busy.so he wants that you will select some plot 
that are square shaped.

Write a code, to help your CEO for finding the all square shaped plot.

Input: First line of input will have the total shortlisted plots by the CEO.
        Second line represents N space saperated integers denoting the area of the plots.

Output: Find out how many plots are their to build a new office.

Exp:
Input: 6
        64, 16, 38, 81, 50, 100

Output: 4

*/
#include<iostream>
// #include<bits/stdc++.h>
#include<cmath>
using namespace std;

int is_perfect_sqr(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(ceil((double)sqrt(arr[i])) == floor((double)sqrt(arr[i]))){
            count++;
        }        
    }
    return count;
}

int main(){
    int arr[6] = {64, 16, 38, 81, 50, 100};

    int ans = is_perfect_sqr(arr, 6);
    cout<<ans<<endl;
        return 0;

}