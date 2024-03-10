//reverse diagonal wise sum print

#include<iostream>
using namespace std;

void reverseDiagonalWiseSum(int arr[][3], int row, int col){
    int sum = 0;
    for(int i = row-1,j=0; i>=0,j<col; i--,j++){
        sum = sum + arr[i][j];
    }
    cout<<"The Reverse Diagonal Wise Sum is: "<<sum<<endl;
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int row = 3;
    int col = 3;
    
    reverseDiagonalWiseSum(arr,row,col);
    return 0;
}
