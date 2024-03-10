//2 D array vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<vector<int>>arr(5,vector<int>(10,0));
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    //Jagged array
  /*  vector<vector<int>>arr;
    vector<int>brr(10,2);
    arr.push_back(brr);
    vector<int>crr(3,5);
    arr.push_back(crr);
    vector<int>drr(7,8);
    arr.push_back(drr);
    
     for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    return 0;
}
