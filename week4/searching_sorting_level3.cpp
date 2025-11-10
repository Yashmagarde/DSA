#include<iostream>
using namespace std;

int getquotient(int divident,int divisor){
    int s=0;
    int e=divident;
    int quo= s+(e-s)/2;
    int ans;
    


    while(s<=e){
        
        if(quo*divisor==divident){
            return quo;
        }
        else if(quo*divisor<divident){
            ans = quo;
            s=quo+1;
        }
        else{
            e=quo-1;
        }
        quo = s+(e-s)/2;
        
    }
    return ans;
    
}


// int targetfinder(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid = s+(e-s)/2;

//     while(s<=e){
//         if(mid-1>=0 && arr[mid-1]==target){
//             return mid-1;
//         }
//         else if(arr[mid]==target){
//             return mid;
//         }
//         else if(mid+1<n && arr[mid+1]==target){
//             return mid+1;
//         }
//         else if(arr[mid]<target){
//             s=mid+2;
//         }
//         else{
//             e=mid-2;
//         }
//         mid = s+(e-s)/2;
//     }
//     return -1;



// }




int oddoccfinder(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        else if(mid%2==0){
            if(mid+1<n && arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }

        }
        else{
            if(mid-1>0 && arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}


int main(){

    // int divident= 14;
    // int divisor = -7;

    // int ans = getquotient(abs(divident),abs(divisor));

    // if((divident<0 && divisor>0) || (divident>0 && divisor<0)){
    //     ans =0-ans;
    // }
    // cout<<"the quotient is:"<<ans;



    // find target in nearly sorted array

    // int arr[]={20,10,30,50,40,70,60};
    // int n=7;
    // int target =70;

    // int ans = targetfinder(arr,n,target);
    // cout<<"the index of the target element is:"<<ans;


    // find odd occuring number

    int arr[]={1,1,5,5,4,2,2,3,3,6,6};
    int n=11;
    
    int ans = oddoccfinder(arr,n);
    cout<<ans;





    return 0;
}