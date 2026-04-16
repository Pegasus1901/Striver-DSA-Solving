#include<iostream>
using namespace std;

//Can also design return type with bool
int pallindromeNumber(int num){
    int temp=0;
    while(num!=0){
        int n=num%10;
        temp=temp*10+n;
        num=num/10;
    }
    return temp;
}

int main(){
    int input;
    cin>>input;

    if(input==pallindromeNumber(input)){
        cout<<"Pallindrome";
    }else{
        cout<<"Not a Pallindrome";
    }
}
