#include <iostream>
using namespace std;

bool armstrongNum(int n){
    int sum = 0,num=n;
    while(num!=0){
        int digit=num%10;
        digit= digit*digit*digit;
        sum=sum+digit;
        num=num/10;
    }
    if(sum==n){
        return true;
    }
    return false;
}

int main()
{
    if(armstrongNum(372)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
