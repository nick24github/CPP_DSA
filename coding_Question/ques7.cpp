/*Alex is given a number N. He has to check wheater the number is a Meta number or not.
    Meta number are the numbers that are divisible by 1,2,4 and 8 but not by 10.
    Your task is to find a number of Meta numbers in the range 1 to N.
    
    Input Format:
    The input consist of a single lines :
    ->The line contains a single integer N.
    The Input will be read from the STDIN by the candidate.

    Output Format:
    Print the number of Meta Numbers

    Constraints:
    -> 1<= N <= 10power9
    Example:
    Input: 20
    Output:2
    Explanation: 8 and 16 are meta numbers as they are divisible by 1,2,4 and 8 but not divisible by 10.
    Sample Input: 13
    Sample Output:1
    */
#include<iostream>
using namespace std;
int Count_Meta(int N){
    int count = 0;
    for(int i=1; i<=N; i++){
        if(i%1==0 && i%2==0 && i%4==0 && i%8==0 && i%10!=0){
            count++;
        }
    }
    return count;

}
int main(){
    int n;
    cin>>n;

    int ans = Count_Meta(n);
    cout<<ans;
    return 0;

}
