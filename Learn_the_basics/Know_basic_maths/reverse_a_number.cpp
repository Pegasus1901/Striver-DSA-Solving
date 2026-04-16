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

int main(){
    int input;
    cin>>input;
    cout<<reverseNumber(input);
}
