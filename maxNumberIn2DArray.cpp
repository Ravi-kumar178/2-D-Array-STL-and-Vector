//max number in 2-D Array 

#include<iostream>
#include<limits.h>
using namespace std;

int maxNum(int arr[4][3],int rowCount, int colCount){
 /*   int num = INT_MIN;

    for(int row = 0; row < rowCount; row++){
        for(int col = 0 ; col < colCount; col++){
            if(arr[row][col] > num){
                num = arr[row][col];
            }
        }
    }
*/
   //another method
    int num = arr[0][0];

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < colCount; col++){
            if(arr[row][col] > num){
                num = arr[row][col];
            }
        }
    }

    return num;
}

int main(){
    int arr[4][3] = {
        {1,2,3},
        {1,2,1},
        {1,4,2},
        {2,3,1}
    };

    int rowCount = 4 , colCount = 3;

    int ans = maxNum(arr,rowCount,colCount);
    cout<<"The maximum number in the 2-D Array is: "<<ans<<endl;
    return 0;
}