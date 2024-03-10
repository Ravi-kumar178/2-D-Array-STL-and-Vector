// The STL that is Standard Template Library provides a collection of template classes and function
//that offers a common data structure and algorithm to make programming more efficient and convenient

//The vector in c++ is a dynamic array that can grow or shrink their size and capacity as per requiremeny
//making the array more efficent and versatile data structure for storing and manipulating the element
//present in the array 

//dynamic array

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    
    for(int i = 0; i < n; i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
 /*   cout<<"Printing the array: "<<endl;
    printArray(arr,n);
  */  
    for(int i = 0; i < 10; i++){
        arr[n+i] = 80;
    };
    
    //malloc(): corrupted top size -> so here size is restricted to the input size and it's size and capaity doesn'th increases
    //therefore we require vector here
    
    cout<<"Printing the new array: "<<endl;
    printArray(arr,n);
    
    return 0;
}