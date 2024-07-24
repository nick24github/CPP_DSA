#include<iostream>
using namespace std;

/* WHAT IS AN ARRAY :
    an array is a data structure that is used to store multiple
    values of similar data types in a contiguous memory location.
    ----------------------------OR------------------------------
    Array is a linear data structure in which we can store data in 
    adjacent & contiguous memory location
    ---->Array follow indexing (0 to n-1)*/

int main(){
    // Method 1: To declare the size of array and initialize it
    int marks [5] = {25, 26 , 29, 30, 35};
    //displaying array value using index
    cout<<"marks are :"<< marks[0]<<endl;
    cout<<"marks are :"<< marks[1]<<endl;
    cout<<"marks are :"<< marks[2]<<endl;
    cout<<"marks are :"<< marks[3]<<endl;
    cout<<"marks are :"<< marks[4]<<endl;    
    // Method 2: Initialize the array without declaring its size
    // Then compiler will automatically compute the size of array according to given values 
    int marks2 [] = {1, 2, 3, 4, 5, 6, 7};
    // Method 3: take the value from user (user input)
    int n;
    cout<<"Enter size of an array :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter values of an array :";
    //displaying array values using for loop
    for(int i=0; i<=n-1; i++){
        cin>>a[i];
        cout<<a[i]<<endl;
    }
    // Method 4: take the value from user (user input)
}
