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


int main()
{
    string word = "CANDIDATEA";
    maxFreq(word);
    return 0;
}
