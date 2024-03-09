//find index no of target element in 2-D Matrix

#include<iostream>
using namespace std;

//finding index using linearSearch
void linearSearch(int arr[3][3], int rowCount, int colCount, int target){
    int temp[2];
    bool flag = 0;

    for(int row = 0 ; row < rowCount; row++){
        for(int col = 0; col < colCount; col++){
            if(arr[row][col] == target){
                flag = 1;
                temp[0] = row;
                temp[1] = col;
                break;
            }
        }
    }

    if(flag){
        cout<<"Target is present at index of i: "<<temp[0]<<"& j: "<<temp[1]<<endl;
    }
    else{
        cout<<"Target is absent"<<endl;
    }
}

int main(){
    int arr[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int rowCount = 3, colCount = 3, target = 70;

    linearSearch(arr,rowCount,colCount,target);
    return 0;
}