#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

bool mycomp(int a,int b){
        return a>b;

}

void printvv(vector<vector<int>>&v){
    cout<<"Here are the values"<<endl;
    for(int i=0;i<v.size();i++){
        vector<int>temp =v[i];
        int a = temp[0];
        int b= temp[1];
        cout<<a<< " "<<b<<endl;
    }
}

bool sortonindexone(vector<int>&a ,vector<int>&b){
    return a[1]<b[1];
}

int main(){
    // vector<int>v={23,57,93,49,28,29};
    // sort(v.begin(),v.end(),mycomp);
    // print(v);

    //vector of vector sorting

    vector<vector<int>>v;
    int n;
    cout<<"Enter the size of the vector:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    printvv(v);

    sort(v.begin(),v.end(),sortonindexone);
    printvv(v);





    return 0;
}