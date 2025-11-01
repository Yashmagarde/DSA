#include<iostream>
using namespace std;


// int getuniqueno(int arr[],int size){
//     int ans =0;
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }


// void pairprinter(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")";
//         }
//     }
// }


// void sortzeroone(int arr[],int n){
   

//     int zerocount=0;
//     int onecount =0;


//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zerocount++;
//         }
//         else if(arr[i]==1){
//             onecount++;
//         }
//     } 



//     int i;

//     for(i=0;i<zerocount;i++){
//         arr[i] = 0;
//     }
//     for(int j=i;j<n;j++){
//         arr[j] = 1;
//     }


// }


void rightshift(int arr[],int n){
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0]=temp;
}





int main(){

    // int arr[9] = {2,10,34,0,20,2,10,20,34};
    // int size =9;

    // int uniquenumber = getuniqueno(arr,size);
    // cout<<uniquenumber;


    //pair print

    // int arr[3] = {10,20,30};
    // int size= 3;
    // pairprinter(arr,size);


    //triplet printer

    // int arr[4] ={10,20,30,40};
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         for(int k=0;k<n;k++){
    //             cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
    //         }
    //     }
    // }



    //sort zeros and ones

    // int arr[] = {0,1,0,1,1,0,0,1,0,1,1,0};
    // int n=12;
    // sortzeroone(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }





    //shift array by 1 right

    int arr[] ={10,20,30,40,50,60};
    int n=6;
    rightshift(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


    return 0;
}