// #include <bits/stdc++.h>
#include <iostream>
#include <string>
//Declaring an array
void arrayDeclaration(){
    int MyArr[10];
}

class StringsSolutions{
    public:
    //Find length of string using function and return
    int lengthOfString(const std::string& s){
        return s.length();
    }
    //Access each character in string and print them
    void characterFinding(const std::string& s){
        for (const char& c:s )
        {
            std::cout<< c <<std::endl;
        }
    }
    //Modify the string and return string
    std::string modifyString(std::string& s){
        s[0] = 'L';
        return s;
    }
    //Compare the strings and return true or false
    bool compareBothStrings(std::string s1, std::string s2){
        if(s1==s2){
            return true;
        }

        return false;
    }
};

int main(){
    std::string inputString= "Hello";

    StringsSolutions obj;
    std::cout << obj.lengthOfString(inputString);

    return 0;
}