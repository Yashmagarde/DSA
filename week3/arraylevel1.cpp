#include <iostream>
#include<limits.h>
using namespace std;


// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
// }


// bool targetfinder(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return true;
//         }     
//     }
//     return false;
// }

// void zeroonecounter(int arr[],int size){
//     int zero=0;
//     int one =0;
//     for(int i=0;i<size;i++){
//         if(arr[i] ==0){
//             zero +=1;
//         }
//         else{
//             one +=1;
//         }
//     }
//     cout<<"number of zeros: "<<zero<<endl;
//     cout<<"number of ones: "<<one<<endl;

// }




// void minimumnumber(int arr[],int size){
//     int minimum = INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<minimum){
//             minimum = arr[i];
//         }
//     }
//     cout<<minimum;

// }




// void reversearray(int arr[],int size){
//     // int left =0;
//     // int right = size-1;
//     // while(left<=right){
//     //     swap(arr[left],arr[right]);
//     //     left++;
//     //     right--;
//     // }

//     //using for loop

//     for(int left=0,right=size-1;left<=right;left++,right--){
//         swap(arr[left],arr[right]);
//     }
// }




void extremeprint(int arr[],int size){
    int left =0;
    int right =size-1;
    while(left<=right){
        if(left==right){
             cout<<arr[left]<<" ";
             left++;
        right--;

        }
        else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++;
        right--;
        }

    }
}




int main(){

    //array creation
    // int arr[10];
    // char ch[102];
    // bool flags[23];
    // long num[999];


    //addressof operator

    // int a=5;
    // cout<<"address of arr is:"<<&a<<endl;

    // int arr[10];
    // cout<<"address of arr is:"<<&arr;


    // int arr[] = {1,23,3,6};
    // int brr[5] = {1,2,3,4,5};
    // int crr[5] ={1,2};
    // int drr[2] = {1,3,4,5,6};



    //indexing

    // int arr [5] = {1,2,3,4,5};
    // cout<<arr[1]<<endl;
    // cout<<arr[4];



    //printing in an array


    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }


    //taking input in array

    // int arr[5];
    // int n=5;

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }



    //problem statement1

    // int arr[10];
    // int n=10;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     arr[i] = arr[i]*2; 
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    //problem statement 2

    // int arr[5];
    // int n=5;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    //  for(int i=0;i<n;i++){
    //     sum = sum+ arr[i];
    // }
    // cout<<sum;


    //linear search

    // int arr[6]={2,4,6,8,10 ,12};
    // int n=6;
    // int num =10;
    // bool flag =0;

    // for(int i=0;i<n;i++){
    //     if(arr[i] == num){
    //         flag =1;
    //         break;

    //     }

    // }

    // if(flag==1){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";

    // }


    // array and fuction

    // int arr[5]={1,2,3,4,5};
    // int size=5;
    // printarray(arr,size);



    //linear search function
    // int arr[5] = {1,2,3,4,5};
    // int size =5;
    // int target =4;
    // bool flag = targetfinder(arr,size,target);
    // if(flag ==true){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }





    //zero one counter

    // int arr[10]={0,1,1,0,1,0,1,0,0,1};
    // int size =10;
    // zeroonecounter(arr,size);



    //minimum number in an array

    // int arr[10]={78,200,333,633,722,274,222,33,93,2332};
    // int size=10;
    // minimumnumber(arr,size);



    //reverse an array

    // int arr[6] ={10,20,30,40,50,60};
    // int size =6;
    // int brr[6];
    // int j=0;
    // for(int i=5;i>=0;i--){
    //     brr[i] = arr[j];
    //     j++;
        
    // }
    // for(int i=0;i<size;i++){
    //     cout<<brr[i]<<" ";
    // }



    //using swap

    // int arr[6] ={10,20,30,40,50,60};
    // int size =6;
    // reversearray(arr,size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }



    //extream print in an array

    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    int size =11;
    extremeprint(arr,size);
   

    








    return 0;
}