
#include<iostream>
using namespace std;

void diagonalWiseSum(int arr[3][3], int rowCount , int colCount){
    int sum = 0;
    for(int row = 0; row < rowCount; row++){
        sum = sum + arr[row][row];
    }
    
    cout<<"diagonalWiseSum is : "<<sum<<endl;
}

int main(){
    int arr[3][3] = {
        {1,2,2},
        {1,2,3},
        {2,1,3},
    };
    
    int row = 3;
    int col = 3;
    
    diagonalWiseSum(arr,row,col);
    return 0;
}