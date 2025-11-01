#include<iostream>
using namespace std;

void countsetbit(int num){
    int count =0;
    while(num>0){
        int bit = num % 2 ;
        if(bit==1){
            count++;
        }
        num =num/2;

    }
    cout<<count;
    
    
}



int main(){
    int num;
    cin>>num;

    countsetbit(num);
    
 

}