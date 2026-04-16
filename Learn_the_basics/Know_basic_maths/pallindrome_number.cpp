#include<iostream>
using namespace std;

int pallindromeNumber(int num){
    int temp=0;
    while(num!=0){
        int n=num%10;
        temp=temp*10+n;
        num=num/10;
    }
    return temp;
}
//LeetCode Solution
bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long temp=0,num=x;
        while(x!=0){
            int n=x%10;
            temp=temp*10+n;
            if(temp>INT_MAX||temp<INT_MIN){
                return false;
            }
            x=x/10;
        }
        
        if(num==temp){
            return true;
        }
        return false;
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
