#include<iostream>
using namespace std;

int reverseNumber(int num){
    int temp=0;
    while(num!=0){
        int n = num % 10;
        temp = temp * 10 + n;
        num=num/10;
    }
    return temp;
}
//LeetCode Solution
int reverse(int x) {
    long long temp=0;
    while(x!=0){
        int n = x % 10;
        temp = temp * 10 + n;
        if(temp>INT_MAX||temp<INT_MIN){
            return 0;
        }
        x=x/10;
    }
    return temp;
    }

int main(){
    int input;
    cin>>input;
    cout<<reverseNumber(input);
}
