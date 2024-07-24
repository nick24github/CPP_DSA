/*-----------------------Array Operation----------------------*/
// Traversal--> Visit every element of the array
/*Insertion--> Including one or more value in the array (at the beginning), (at the end),
    (at any given index)*/
/*Deletion--> to delete the  desiered element and reorganize the array
    (at the beginning), (at the end), (at any given index)*/
// Searching--> search the any specific value in array
// Sorting--> arrange the array element in a certain order

//----------------------Traverse Operation----------------------

#include<iostream>
using namespace std;
int main(){
    int arr [5] = {8,5,6,9,4};
    // Array Traversing
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    //Traversing using for loop
    for(int i=0; i<=4; i++){
        cout<<"Index :"<< i<< " Value :"<<arr[i]<<endl;
    }
    return 0; 
}