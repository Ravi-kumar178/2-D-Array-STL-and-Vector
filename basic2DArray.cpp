//basic 2 D Array 

#include<iostream>
using namespace std;

//takingInput

void takingInput(int arr[][4], int row, int col){
    for(int i =0; i< row; i++){
        for(int j = 0; j < col ; j++){
            cin>>arr[i][j];
        }
    }
}

//printArray

void printArray(int arr[][4] , int row , int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
  //  int arr[4][3];
    
   int arr[3][4] = {
       {1,2,3,4},
       {4,3,2,1},
       {2,2,3,1}
   } ;
   
   int row = 3 , col = 4;
   
   printArray(arr,row,col);
   
   cout<<endl;
   
   cout<<"Learn to taking input in a 2D Matrix: "<<endl;
   
   int brr[3][4];
    row = 3, col = 4;
   takingInput(brr,row, col);
   cout<<"Printing the Array brr: "<<endl;
   printArray(brr,row,col);
    
    return 0;
}