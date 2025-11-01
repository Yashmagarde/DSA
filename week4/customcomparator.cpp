#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycomp(int &a,int &b){
    // return a<b; ye increasing order me hi arrange karega
    return a>b; //ye decresing order me sort karega
}

void printvv(vector<vector<int>>&v){
    cout<<"Here are the values"<<endl;
    for(int i=0;i<v.size();i++){
        vector<int>&temp=v[i];
        int a= temp[0];
        int b= temp[1];
        cout<<a<<" "<<b<<endl;
    }

}

int main(){
    // vector<int>v={55,63,35,86,25,94,29,8};
    // sort(v.begin(),v.end(),mycomp);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }


    //vector of vector

    vector<vector<int>>v;
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cout<<"Enter the value of a,b:"<<endl;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }


    printvv(v);








    return 0;
}