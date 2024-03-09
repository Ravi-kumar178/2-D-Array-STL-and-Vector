#include<iostream>
using namespace std;

//linearSearch
void linearSearch(int arr[3][3], int row, int col , int target){
    bool found = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col ; j++){
            if(arr[i][j] == target){
                found = 1;
                break;
            }
        }
    }
    
    if(found){
        cout<<"target is present"<<endl;
    }
    else{
        cout<<"Target is not present"<<endl;
    }
}

int main(){
   int arr[3][3] = {
       {10,20,30},
       {40,50,60},
       {70,80,90}
   };
   int row = 3, col = 3,target = 70;
   
   linearSearch(arr,row, col , target);
   return 0;
}