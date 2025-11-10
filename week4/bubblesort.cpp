#include<iostream>
#include<vector>
using namespace std;


void print(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubblesort(vector<int>&arr){
    int n=arr.size();

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){     // if increasing order me chahiye to > or decreasing ke liye <
                swap(arr[j],arr[j+1]);
            }
        }
    }
}



int main(){

    vector<int>arr={22,34,12,3,4,56,78,4,43,4,3,34,3,2,4,33,43};

    bubblesort(arr);
    print(arr);

    return 0;
}