# include<iostream>
using namespace std;

/*-------------------Insertion-------------------*/
// At beginning
int main(){
    int array[10], n, x;
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter array elements : ";
    for (int i=0; i<n; i++ ){
        cin>> array[i];
    }
    cout<<"Enter the element at the beginning :";
    cin>>x;
    for (int i=n; i>0; i--){
        array [i] = array[i-1];
    }
    array[0] = x;
    n++;
    cout<< "Array Elements are :";
    for(int i=0; i<n; i++){
        
    }

}



