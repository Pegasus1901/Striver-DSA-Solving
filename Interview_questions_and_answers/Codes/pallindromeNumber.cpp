#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(int n){
    if(n<=0){
        return false;
    }
    int rev=0,curr=n;
    while(n!=0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(rev==curr){
        return true;
    }else{
        return false;
    }
}

bool halfReverse(int n){
    if(x<0 || (x%10==0 && x!=0)){
        return false;
    }
    int revHalf=0;
    while(x>revHalf){
        revHalf= revHalf*10+(x%10);
        x/=10;
    }
    return (x==revHalf || x==revHalf/10);
}

int main()
{
    int num = 123321;
    
    if(checkPalindrome(num) || halfReverse(num)){ // any one function is fine
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }

    return 0;
}
