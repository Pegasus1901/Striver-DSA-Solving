#include <iostream>
#include <string>
using namespace std;

void pallindrome(string s){
    for(int i=0; i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"not pallindrome";
            return ;
        }
    }
    cout<<"pallindrome";
}

bool pallindromeSlightBetter(string st){
    for(int i=0; i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "ABCDCBA";
    pallindrome(str);
    if(pallindromeSlightBetter(str)){
      cout<<"pallindrome";
    }else{
      cout<<"not pallindrome";
    }

    return 0;
}
