#include<iostream>
using namespace std;

//fuction to display area of circle

// void areaofcircle(int r){
//     cout<<r*r*3.14;
// }


//fuction to check even or odd

// void evenorodd(int n){
//     if(n%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }
// }

//fuction to check even or odd using bitwise

// void evenoroddusingbit(int n){
//     if((n & 1)==0){
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
// }

//find the factorial

// int fact(int n){
//     int pro =1;
//     for(int i=1;i<=n;i++){
//         pro =pro*i;
//     }
//     return pro;
// }



//fuction check given number is prime or not

// bool primeornot(int n){
//     if(n ==1){
//         return true;
//     }
//     else{
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
// }
//     return true;
// }



//function for reverse integer

// void reverseinteger(int n){
//     int ans=0;
//     while(n!=0){
//         int digit = n%10;  // isse humare number ki last digit nikal jayegi
//         // if(ans > INT_MAX/10 || ans < INT_MIN/10){
//         //     return 0;
//         // }//for handling exceptional case
//         ans = ans*10 + digit;  // isse hum digit se number banana start karenge
//         n=n/10; //isse hum no. se jo digit niak gayi hai use hata denge
//     }
//     cout<< ans;
// }


// fuction for set kth bit

// void setkthbit(int n,int k){
//     int mask = 1 << k;
//     int ans = n | mask;
//     cout<<ans;

// }




//count all set bits normal method

// int countsetbits(int n){
//     int count =0;
//     while(n>0){
//         int bit = n%2;
//         if(bit ==1 ){
//             count++;
//         }
//         n = n/2;
//     }
//     return count;
// }

//count all set bits using bitwise method

// int countsetbits(int n){
//     int count=0;
//     while(n>0){
//         int bit= n&1;
//         if(bit==1){
//             count++;
//         }
//         n = n>>1;

//     }
//     return count;
// }


//create number using digits

// void numbermaker(int numberofdigits){
//     int number =0;
//     while(numberofdigits != 0){
//         int digit;
//         cout<<"Enter the Digit: "<<endl;
//         cin>>digit;
//         number = number*10+digit;
//         cout<<"Number created: "<<number<<endl;
//         numberofdigits--;
//     }

// }


//function to print all digits of an integer

// void digitprinter(int number){
//     while(number>0){
//         int digit = number%10;
//         cout<<"Digit: "<<digit<<endl;
//         number = number/10;

//     }

// }


//fuction for KM to Miles

float kmtomiles(float km){
    float miles = km * 0.621371;
    return miles;
}





int main(){
    // int n;
    // cin>>n;


    //numeric hollow half pyramid

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         if(i==0 || i==n-1 || j==0 || j==i){
    //             cout<<j+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    //numeric hollow inverted half pyramid

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         if(i==0|| i==n-1 || j==0 || j== n-i-1){
    //             cout<<j+i+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //numeric palindrome equilateral pyramid

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1;
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }

    //solid half diamond

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Fancy Pattern #1

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-i-2;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0){
    //         cout<<i+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     for(int j=0;j<2*n-i-2;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Fancy Pattern #2


    // int count =1;
    // for(int i=0;i<n;i++){
        
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0){
    //         cout<<count;
    //         count++;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // int start =count-n;
    // for(int i=0;i<n;i++){
    //     int k=start;
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         if(j%2==0){
    //         cout<<k;
    //         k++;
    //         }
    //         else{
    //             cout<<"*";
    //         }          
    //     }
    //     start = start -(n-i-1);
    //     cout<<endl;
    // }


    //Fancy Pattern #3




    //Floyds Triangle

    // int count =1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }


    //Pascals Triangle
    //using formula learn direct formula
    // C = C(i-j)/j WHERE i =[1,n] and j=[1,i]
    
    // for(int i=1;i<=n;i++){
    //     int c=1;
    //     for(int j=1;j<=i;j++){
    //         cout<<c<<" ";
    //         c=c*(i-j)/j;
    //     }
    //     cout<<endl;
    // }


    //Butterfly Pattern

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<2*n-2*i-2;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<2*i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }




    //fuction to display area of circle

    // areaofcircle(5);


    //fuction to check even or odd

    // evenorodd(12);

    //fuction to check even or odd using bitwise

    // evenoroddusingbit(1);

    //find the factorial

    // int factorial = fact(5);
    // cout<<factorial;


    //check given number is prime or not

    // bool prime = primeornot(1);

    // if(prime){
    //     cout<<"prime";
    // }
    // else{
    //     cout<<"not prime";
    // }

    //print all prime number from 1 to n

    // int n=20;

    // for(int i=1;i<n;i++){
    //     bool prime = primeornot(i);

    // if(prime){
    //     cout<<i<<" ";
    // }

    // }


    //reverse integer leetcode 7

    // reverseinteger(-862);


    //set kth bit

    // setkthbit(15,3);


    //count all set bits normal method and bitwise method

    // int count = countsetbits(7);
    // cout<<count;



    //create number using digits

    // int numberofdigits;
    // cout<<"Enter the number of digits you want to give:"<<endl;
    // cin>>numberofdigits;
    // numbermaker(numberofdigits);



    //print all digits of an integer

    // int number;
    // cout<<"Enter the number: ";
    // cin>> number ;
    // digitprinter(number);


    //km to miles 


    float km;
    cout<<"Enter km: ";
    cin>>km;

    float miles = kmtomiles(km);
    cout<<"In "<<km<<" km"<<" there is "<<miles<<" miles";






    return 0;
}