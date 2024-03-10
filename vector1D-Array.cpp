#include<iostream>
#include<vector>
using namespace std;

/*void printArray(vector<int>v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
*/

//alternative way of printing the array -> use For-each loop

void printArray(vector<int>v){
    for(auto it:v){
        cout<<it<<" ";
    }
}

int main(){
 /*   vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    for(int i = 0; i < 10; i++){
        v.push_back(80);
    }
    
    cout<<"Size is: "<<v.size()<<"Capacity is: "<<v.capacity()<<endl;
    //printing the array
    cout<<"The Array is: "<<endl;
    printArray(v);
 */   
    
    //New array declaration
    vector<int>arr(5,50);
    cout<<"Printing the array arr is: "<<endl;
    printArray(arr);
    cout<<endl;
    
    for(int i = 0; i < 10; i++){
        arr.push_back(i);
    }
    
    cout<<"printing the new array"<<endl;
    printArray(arr);
    cout<<endl;
    
   /* vector<int>brr(5,1,2,3,4,5);
    cout<<"Printing the array brr is: "<<endl;
    printArray(brr);
    // no matching function for call to ‘std::vector::vector(int, int, int, int, int, int)->
    //so we can't give the entire input of array in vector like it 
    */
    
    cout<<"Element present at starting and ending index: "<<arr.at(0)<<" and "<<arr[arr.size()-1]<<endl;
    cout<<"Element present at starting and ending index: "<<arr.front()<<" and "<<arr.back()<<endl;
    
    //delete item 
   /* int n = arr.pop_back();
    cout<<"Printing the pop out element: "<<n<<endl;
    */
    arr.pop_back();
    cout<<"Printing the array: "<<endl;
    printArray(arr);
}