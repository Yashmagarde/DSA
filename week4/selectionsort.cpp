#include<iostream>
#include<vector>
using namespace std;


void print(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selectionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[minindex]){  // use > for decreasing order
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}




int main(){
    vector<int>arr={44,55,33,11,22};
    selectionsort(arr);
    print(arr);




    return 0;
}