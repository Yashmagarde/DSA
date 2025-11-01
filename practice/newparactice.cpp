#include<iostream>
using namespace std;

int main(){

    int n=10;
    int arr[10] ={23,-7,4,-5,6,4,-49,9,-58,32};

    int j=0;
    for(int index =0;index<n;index++){
        if(index<0){
            swap(arr[index],arr[j]);
            j++;
        }


    }






    return 0;
}