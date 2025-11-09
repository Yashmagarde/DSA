#include<iostream>
using namespace std;

int binarysearch(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    // int mid = (start+end)/2;
    int mid = start +(end-start)/2;
    while(start <= end ){
        if(target == arr[mid]){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid +1;
        }
        else if(target < arr[mid]){
            end = mid -1;

        }
        mid = start +(end-start)/2;
    }

    return -1;
}


int  firstOccurence(int arr[], int n,int target){
    int s=0;
    int e=n-1;
    // int mid=(s+e)/2;
    int mid = s +(e-s)/2;
    int ans =-1;

    while(s<=e){
        if(arr[mid]==target){
            ans = mid;
            e =mid-1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else if(target < arr[mid]){
            e = mid-1;
        }
        mid = s+(e-s)/2;

    }
    return ans;
}


int lastOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    // int mid = (s+e)/2;
    int mid = s +(e-s)/2;
    int ans =-1;

    while(s<=e){
        if(target == arr[mid]){
            ans = mid;
            s = mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }

        mid = s+(e-s)/2;
        
    }
    return ans;
}




int totaloccurence(int arr[],int n,int target){
    int fisrtocc = firstOccurence(arr,n,target);
    int lastocc = lastOccurence(arr,n,target);
    int totalocc = (lastocc - fisrtocc) +1;
    return totalocc;

}


int findmissing(int arr[],int n){
    int s=0;
    int e=n-1;
    // int mid =(s+e)/2;
    int mid = s +(e-s)/2;

    int ans=-1;
    while(s<=e){
        if(arr[mid]-mid==1){
            s=mid+1;
        }
        else if(arr[mid]-mid==2){
            e=mid-1;
            ans =mid ;
        }
        mid=(s+e)/2;
    }
    if(ans+1==0){
        return n+1;
    }
    return ans+1;
}

int main(){

    // int arr[] = {10,20,30,40,50,60,70,80,90};
    // int target =90;
    // int n =9;

    // int ansIndex = binarysearch(arr,n,target);

    // if(ansIndex == -1){
    //     cout<<"Element not found";
    // }
    // else{
    //     cout<<"Element found at index: "<<ansIndex;
    // }


    // first occurence nikalo

    // int arr[] = {10,20,30,30,30,30,40,50};
    // int n=8;
    // int target = 30;

    // int ans = firstOccurence(arr,n,target);

    // if(ans ==-1){
    //     cout<<"element not found";
    // }
    // else{
    // cout<<"Element first occurs at index: "<<ans;
    // }


    // last occurence nikalo

    // int arr[] = {10,20,30,30,30,30,40,50};
    // int n=8;
    // int target = 30;

    // int ans = lastOccurence(arr,n,target);

    // if(ans ==-1){
    //     cout<<"element not found";
    // }
    // else{
    // cout<<"Element last occurs at index: "<<ans;
    // }


    // find total occurence

    // int arr[] = {10,20,30,30,30,30,40,50};
    // int n=8;
    // int target = 30;

    // int totalocc = totaloccurence(arr,n,target);
    // cout<<"Total number of occurence: "<<totalocc;



    // find missing element in sorted array

    // int arr[] ={1,2,3,4,5,6,7,8};
    // int n=8;

    // int ans = findmissing(arr,n);
    // cout<<ans;


    // return 0;



    // Leetcode 852 - peak index in a mountain array
}