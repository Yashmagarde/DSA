#include<iostream>
using namespace std;

int main(){
    int val;
    cin>>val;
    int n= val;

    //full pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //inverted full pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //diamond
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){ 
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //hollow full pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){       
    //         if(j==0 || j==i){
    //         cout<<"* ";
    //     }
    //     else{
    //         cout<<"  ";
    //     }
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         if(j==0 || j== n-i-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //hollow diamond

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         if(j==0 || j== i){
    //         cout<<"* ";
    //         }
    //         else{
    //         cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         if(j==0 || j== n-i-1){
    //         cout<<"* ";
    //         }
    //         else{
    //         cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // for(int i=0 ;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<(2*i)+1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }
    // for(int i=0 ;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<((2*n)-(2*i))-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<(2*i)+1;j++){
    //         if(j%2==0){
    //             cout<<i+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }


    //     }
    //     cout<<endl;
    // }

    

    //hollow inverted half pyramid

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         if(i==0 || i== n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             if(j==0 || j==n-i-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }


    // for(int i=0;i<n;i++){
    //     char ch;
    //     for(int j=0;j<i+1;j++){
    //         ch =(j+1)+'A'-1;
    //         cout<<ch;
    //     }
        
    //     for(char j= ch-1 ;j>='A';j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    //HOMEWORK

    //Numeric hollow inverted half pyramid

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //          if(i==0 || i==n-1){
    //         cout<<i+j+1;}
    //         else{
    //             if(j==0 || j== n-i-1){
    //                 cout<<i+j+1;
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    //numeric palindrome eqilatral pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     int count;
    //     for(int j=0;j<i+1;j++){
    //         count =j+1;
    //         cout<<count;
            
    //     }
    //     for(int j=count-1;j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-i-2;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0){
    //             cout<<i+1<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     for(int j=0;j<2*n-i-2;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //solid half diamond
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //floyd triangle
    // int num =1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    //butterfly pattern

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n-2*i-2;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*i);j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }




    return 0;
}