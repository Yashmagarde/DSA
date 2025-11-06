#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void printarray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void colwiseprint(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i];
        }
        cout<<endl;
    }
}



bool linearsearch(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int maxfinder(int arr[][3],int row,int col){
    int maxnum = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] >maxnum){
                maxnum = arr[i][j];
            }
        }
    }
    return maxnum;
} 


int minfinder(int arr[][3],int row,int col){
    int minnum = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minnum){
                minnum = arr[i][j]; 
            }
        }
    }
    return minnum;
}

void rowsumprint(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum =0;
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j]; 
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;  
    }
}


void colsumprint(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum =0;
        for(int j=0;j<row;j++){
            sum = sum + arr[j][i];
        }
        cout<<"Sum of col "<<i<<" is "<<sum<<endl;  
    }
}

void diagonalsum(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        sum = sum + arr[i][i];
    }
    cout<<sum;
}



void transpose(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }

    }
}

int main(){

    // create 2d array
    // int arr[3][3];


    //initialize

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };
 

    //atleast number of columns batana padega (c*i+j)=> iski wajah se 

    // int arr[][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };


    //print array

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };
 

    // int row =3;
    // int col=4;

    //  printarray(arr,row,col);
    // colwiseprint(arr,row,col);


    //input in 2d array

    // int arr[3][4];
    // int col=4;
    // int row=3;

    // for(int i=0;i<row;i++ ){
    //     for(int j=0;j<col;j++){
    //         cout<<"enter the value for "<<i<<","<<j<<" index: ";
    //         cin>>arr[i][j];
    //     }
    // }
    // printarray(arr,row,col);



    //linear seraching

    // int arr[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

    // int row=3;
    // int col=3;
    // int target=70;
    // bool present =linearsearch(arr,row,col,target);
    // if(present){
    //     cout<<"present";
    // }
    // else{
    //     cout<<"not present";
    // }


    // find max

    // int arr[3][3] ={
    //     {10,34,3},
    //     {83,43,23},
    //     {32,35,2}
    // };
    // int row =3;
    // int col=3;

    // int maxnum = maxfinder(arr,row,col);
    // cout<<maxnum;
    


    //find min

    // int minnum = minfinder(arr,row,col);
    // cout<<minnum;

    //row wise sum print 

    // int arr[3][4] ={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,1}
    // };
    // int row=3;
    // int col=4;

    // // rowsumprint(arr,row,col);
    // colsumprint(arr,row,col);


    // diagonal sum print
    // int arr[4][4] = {
    //     {1,2,3,4},
    //     {1,2,3,4},
    //     {1,2,3,4},
    //     {1,2,3,4}
    // };

    // int row=4;
    // int col=4;
    // diagonalsum(arr,row,col);    



    //transpose of matrix

    // int arr[3][3] ={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // int row=3;
    // int col=3;

    // transpose(arr,row,col);

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j];
    //     }
    // }




    //creating 2d vector

    // vector<vector<int>>arr(5,vector<int>(10,0));

    //printing 2d array

    // for(int i=0;i<arr.size();i++){
    //     for(int j =0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    // jagged array

    // vector<vector<int>>brr;

    

    // vector<int>vec1(5,-1);
    // vector<int>vec2(8,0);
    // vector<int>vec3(12,-13);
    // vector<int>vec4(9,-10);
    // vector<int>vec5(10,-7);

    // brr.push_back(vec1);
    // brr.push_back(vec2);
    // brr.push_back(vec3);
    // brr.push_back(vec4);
    // brr.push_back(vec5);


    // for(int i=0;i<brr.size();i++){
    //     for(int j=0;j<brr[i].size();j++){
    //         cout<<brr[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }


    return 0;
}