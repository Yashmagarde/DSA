#include<iostream>
using namespace std;

int incrementBy1(int &n){
    n =n+1;
    
}

int main(){

    // int n=5; // normal integer variable
    // int &k =n; // k is reference variable referring to n
    // int &c = n; // c is reference variable referring to n
    // cout<<"n: "<<n<<endl;
    // cout<<"k: "<<k<<endl;
    // cout<<"c: "<<c<<endl;

    // k++;

    // cout<<"n: "<<n<<endl;
    // cout<<"k: "<<k<<endl;
    // cout<<"c: "<<c<<endl;

    // // int &t=6; //not possible


    int n;
    cin>>n;
    incrementBy1(n);
    cout<<"n: "<<n<<endl;





    return 0;
}