#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortnegpos(int arr[],int size){
    int j=0;
    for(int index=0;index<size;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }

}

void sortcolors(vector<int>&nums){
    int left=0;
    int right = nums.size()-1;
    int index =0;
    while(index<=right){
        if(nums[index]==0){
            swap(nums[index],nums[left]);
            left++;
            index++;
        }
        else if(nums[index]==2){
            swap(nums[index],nums[right]);
                right--;
        }
        else{
            index++;
        }
    }
}


int main(){

    //Sort negative positive

    // int arr[7] = {23,-7,12,-10,-11,40,60};
    // int size = 7;

    // sortnegpos(arr,size);

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }


    //Leetcode 75 - Sort Colors;

    // vector<int>nums ={2,0,2,1,1,0};
    // sortcolors(nums);
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }

//     Rotate Array (Leetcode - 189)

// Missing Number (Leetcode - 268)

// Rearrange Array Elements by Sign (Leetcode - 2149)

// Row With Maximum Ones (Leetcode - 2643)

// Rotate Image (Leetcode - 48)











    //reverse utility function of <algorithm>

    // vector<int>arr={1,2,3,4,5,6};
    // int size = arr.size();
    // int arr[6]={1,2,3,4,5,6};
    // int size =6;
    // reverse(arr.begin(),arr.end());
    // reverse(arr,arr+size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
}