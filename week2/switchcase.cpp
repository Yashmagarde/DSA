#include<iostream>
using namespace std;

int main(){
    // float a,b;
    // cout<<"Enter 2 numbers:"<<endl;
    // cin>>a>>b;
    // int op;
    // cout<<"what operation you wanna do:"<<endl;
    // cin>>op;
    // //op=0 =>+ ;op=1 => -;op=2 => *;op=3 =>/
    // float ans=0;
    // if(op==0){
    //     ans=a+b;
    // }
    // else if(op==1){
    //     ans=a-b;
    // }
    // else if(op==2){
    //     ans=a*b;
    // }
    // else if(op==3){
    //     ans=a/b;
    // }
    // else{
    //     cout<<"invalid operation"<<endl;
    //     return 0;
    // }
    // cout<<"your answer is:"<<ans;



    //switch case

    float a,b;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;
    int op;
    cout<<"what operation you wanna do:"<<endl;
    cin>>op;
    //op=0 =>+ ;op=1 => -;op=2 => *;op=3 =>/
    float ans=0;
    switch(op){
        case 0:
        ans=a+b;
        break;

        case 1:
        ans=a-b;
        break;

        case 2:
        ans=a*b;
        break;

        case 3:
        ans=a/b;
        break;

        default:
        cout<<"invalid operation";
        return 0;
    }
    cout<<"your answer is:"<<ans;

    return 0;
}