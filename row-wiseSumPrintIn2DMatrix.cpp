
#include<iostream>
using namespace std;

void rowWiseSum(int arr[3][4], int rowCount , int colCount){
    for(int row = 0; row < rowCount; row++){
        int sum = 0;
        for(int col = 0; col < colCount; col++){
            sum = sum + arr[row][col];
        }
        cout<<"The Row wise Sum is : "<<sum<<endl;
    }
}

int main(){
    int arr[3][4] = {
        {1,2,3},
        {4,3,2},
        {1,2,1}
    };

    int row = 3, col = 4;
    rowWiseSum(arr,row,col);
    return 0;
}