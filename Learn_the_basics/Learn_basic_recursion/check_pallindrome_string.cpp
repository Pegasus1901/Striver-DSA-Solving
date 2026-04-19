#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    void pallindromeStringBruteApproach(string s){
        int size = s.length();
        string rev;
        for(int i=size-1;i>=0;i--){
            rev += s[i];
        }
        cout << rev;
    }
    
    void usingLibrary(string s){
        string rev(s.rbegin(),s.rend());
        cout<<rev;
    }
    
    bool usingRecursionOptimalApproach(int i,string s){
        if(i>=s.size()/2) return true;
        if(s[i]!=s[s.size()-1-i]) return false;
        return usingRecursion(i+1,s);
    }
};
int main()
{
    Solution sol;
    string str="ABCDCBA";
    sol.pallindromeStringBruteApproach(str);
    sol.usingLibrary(str);
    if(sol.usingRecursion(0,str)) cout<<"Pallindrome";
    return 0;
}
