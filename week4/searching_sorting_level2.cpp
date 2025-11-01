#include<iostream>
using namespace std;

int pivotfinder(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        
         else if(arr[mid]>arr[mid+1]){
            return mid;
        }
         else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
       
        else if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;


    }
    return -1;
}

int main(){


    int arr[2]={8,10};
    int n=2 ;

    int indexofpivot = pivotfinder(arr,n);
    cout<<"pivot index:"<<indexofpivot;

    




    return 0;
}