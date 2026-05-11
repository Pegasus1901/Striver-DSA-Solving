#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void maxFreq(string str){
    unordered_map<char,int> ump;
    for(char c : str){
        ump[c]++;
    }
    //max freq
    int max=0;
    for(auto f:ump){
        if(f.second>max){
            max=f.second;
        }
    }
    for(auto e:ump){
        if(e.second==max){
            cout<<e.first<<" ";
        }
    }
}
void maxFreqChar(string s){
    char freq[52] = {0};
    
    //  STEP 1: Count frequency of each character
    for(char c:s){
        if(c>='A'||c<='Z'){
            freq[c-'A']++;
        }else if(c>'a'||c<'z'){
            freq[c-'a'+26]++;
        }
    }
    // STEP 2: Find maximum frequency
    int maxFreq=0;
    for(int i=0;i<52;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
        }
    }
    //  STEP 3: Print all characters with max frequency
    for(int i=0;i<52;i++){
        if(freq[i]==maxFreq){
            if(i<26)
                cout<< char(i+'A');
            else
                cout<< char(i-26+'a');
        }
    }
}


int main()
{
    string word = "CANDIDATE";
    maxFreq(word);
    maxFreqChar(word);
    return 0;
}
