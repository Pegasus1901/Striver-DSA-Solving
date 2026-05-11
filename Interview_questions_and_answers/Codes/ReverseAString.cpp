#include <iostream>
#include <string>
using namespace std;

void revString(string s){
    string rev=s;
    int n= s.length();
    for(int i=0;i<n;i++){
        rev[i]=s[n-1-i];
    }
    cout<<rev;
}

void revStringOptimal(string s){
    int left=0,right=s.length()-1;
    
    while(left<right){
        char temp = s[left];
        s[left]=s[right];
        s[right]=temp;
        
        left++;
        right--;
    }
    cout<<s;
}

int main()
{
    string word = "CANDIDATE";
    // revString(word);
    revStringOptimal(word);
    return 0;
}
