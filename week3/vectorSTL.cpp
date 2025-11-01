#include<iostream>
#include<vector>
using namespace std;

// void printvector(vector<int>v){
//     int size = v.size();

//     for(int i=0;i<size;i++){
//         // cout<<v[i]<<" ";
//         cout<<v.at(i)<<" ";  // dono me same results honge
//     }


// }


int main(){
    //static allocation of arrray
    // int arr[5] = {1,2,3,4,5};

    //dynamic allocation of array
    // int n;
    // cout<<"Enter the size of the array:";
    // cin>>n;
    // int *arr= new int[n];
    // for(int i =0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }



    //vector

    // vector<int>v;

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    //  v.pop_back();
    //   v.pop_back();
    //    v.pop_back();
    //     v.pop_back();
    // printvector(v);

    //pop == delete  == end se hoga


    //i want clear full vector
    // v.clear();
    // printvector(v);


   




    //size and capacity

    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"capacity:"<<v.capacity()<<" size:"<<v.size()<<endl;
    // }



    //diffrent ways of vector intialization

    // vector<int>arr;
    // vector<int>arr2(5,-1);// if i need a five size vector at intial with some default value
    // vector<int>arr3 ={1,2,3,4,5}; //new way not every compiler support it
    // vector<int>arr4{1,2,3,4,5}; //new way not every compiler support it
    
    // return 0;




    int arr[8] = {2,4,0,3,0,1,0,1};
    int size =8;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            for(int j =i;j<size;j++){
                arr[j] = arr[j+1];

            }
            arr[size-1] =0;

        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}