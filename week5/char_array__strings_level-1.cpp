#include<iostream>
#include<string.h>
using namespace std;

int getlength(char ch[],int size){
    int length =0;

    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}


void reversestring(char ch[],int length){
    int i=0;
    int j=length-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

//meri kalakari

void convertuppercase(char ch[],int length){
    for(int i=0;i<length;i++){
        if(ch[i]>='a' && ch[i]<='z')
        ch[i]= ch[i]-'a'+'A';
    }
}

void convertlowercase(char ch[],int length){
    for(int i=0;i<length;i++){
        if(ch[i]>='A' && ch[i]<='Z'){
        ch[i] = ch[i] - 'A' +'a';
        }
    }
}


void changetospace(char ch[]){
    int index =0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}

bool checkpalindrome(char ch[],int length){
    int i=0;
    int j=length-1;
    
    while(i<j){
        if(ch[i]!=ch[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main(){
    //creation

    // char ch[100];

    // //input

    // // cin >> ch;
    // cin.getline(ch,100);

    // //print

    // cout<<"printing the value of ch "<<ch<<endl;

    // for(int i=0;i<10;i++){
    //     cout<<"at the index"<<i<<" "<<ch[i]<<endl;
    // }

    // int temp= ch[4];
    // int value = (int)temp;
    // cout<<"the value of the null location is: "<<value;


    //length of string (my way baad me bhaiya ne bhi yahi kiya)

    // char ch[10];
    // cin>>ch;
    // int index=0;
    // int length=0;
    // while(ch[i]!='\0'){

    //     length++;
    //     index++;

    // }
    // cout<<"length of the ch array is: "<<length;

    //length of string(bhaiya way)

    // char ch[100];
    // // cin>>ch;
    // cin.getline(ch,100); //isme space bhi count hogi
    // int length = getlength(ch,100);
    // cout<<"length of the ch array is: "<<length<<endl;
    // cout<<"printing length using function:"<<strlen(ch);




    //reverse the string

    // char ch[100];
    // cin>>ch;
    // int length = getlength(ch,100);
    
    // cout<<"print before reverse:"<<ch<<endl;
    // reversestring(ch,length);
    // cout<<"print after reverse:"<<ch<<endl;


    // convert to uppercase
    // meri kalakari

    // char ch[100];
    // cin>>ch;
    // int length = strlen(ch);

    // cout<<"printing before: "<<ch<<endl;
    // convertuppercase(ch,length);
    // cout<<"printing after: "<<ch<<endl;


    // conver to lowercase
    // cout<<"printing before: "<<ch<<endl;
    // convertlowercase(ch,length);
    // cout<<"printing after: "<<ch<<endl;


    //replace @ with space
    
    
    // char ch[100];
    // cin.getline(ch,100);

    // cout<<"before:"<<ch<<endl;
    // changetospace(ch);
    // cout<<"after: "<<ch;



    //check palindrome


    // char ch[100];
    // cin>>ch;
    // int length = strlen(ch);
    // bool check = checkpalindrome(ch,length);

    // if(check){
    //     cout<<"its a palindrome";
    // }
    // else{
    //     cout<<"its not a palindrome";
    // }


    //strings

    //creation
    // string name;

    //input
    // cin>>name;
    // getline(cin,name);
    

    //print 
    // cout<<"printing: "<<name<<endl;
    // cout<<"printing first character: "<<name[0]<<endl;

    // int index=0;
    // while(name[index] !='\0'){
    //     cout<<"index: "<<index<<" character: "<<name[index]<<endl;
    //     index++;
    // }

    // int value = (int)name[4];

    // cout<<"printing index 4: "<<value;   









    // various fuctions we can use with strings

    // string name;
    // cin>>name;

    //empty string
    // string temp = "";


    // cout<<"length of string: "<<name.length()<<endl;
    // cout<<"String is empty or not: "<<temp.empty()<<endl;
    // cout<<"Character at position zero is: "<<name.at(0);
    // cout<<"Front character of string is: "<<name.front()<<endl;
    // cout<<"back character of string is: "<<name.back()<<endl;



    // string str1="love";
    // string str2="babbar";
    // cout<<"printing before append str1: "<<str1<<endl;
    // cout<<"printing before append str2: "<<str2<<endl;

    // //append
    // str1.append(str2);
    // cout<<"printing after append str1: "<<str1;


    // string desc ="This is a car";
    // desc.erase(4,3);
    // cout<<desc;

    

    // string name = "Yash Magarde";
    // string middle= "Kumar ";

    // name.insert(5,middle);
    // cout<<"Printing name: "<<name;




    // string name ="LOVE";
    // cout<<name<<endl;

    // name.push_back('R');
    // cout<<name<<endl;

    // name.pop_back();
    // cout<<name<<endl;




    // string str1="yaar tera super star desi kalakar";
    // string str2="star";

    // if(str1.find(str2) == string::npos){
    //     cout<<"not found"<<endl;
    // }
    // else{
    //     cout<<"found"<<endl;

    // }



    // string str1="yash magarde";
    // string str2="yash magarde";

    // if(str1.compare(str2)==0){
    //     cout<<"equal";
    // }
    // else{
    //     cout<<"not equal";
    // }



    string desc ="this is a car, big daddy of all suvs";
    cout<<desc.substr(19,5);







    return 0;
}