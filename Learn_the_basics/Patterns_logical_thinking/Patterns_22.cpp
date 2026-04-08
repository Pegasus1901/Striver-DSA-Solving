#include<iostream>
/*
    Problem 1 - 
                * * * * *
                * * * * *
                * * * * *
                * * * * * 
                * * * * *
*/ 
void pattern1(const int& x){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
/*
    Problem 2 - 
                *
                * *
                * * *
                * * * *
                * * * * *
*/
void pattern2(const int& x){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

/*
    Problem 3 - 
                1
                1 2
                1 2 3
                1 2 3 4
                1 2 3 4 5
*/ 
void pattern3(const int& x){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << j+1;
        }
        std::cout << std::endl;
    }
}

/*
    Problem 4 - 
                1
                2 2
                3 3 3
                4 4 4 4
                5 5 5 5 5
*/ 
void pattern4(const int& x){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << i;
        }
        std::cout << std::endl;
    }
}
/*
    Problem 5 - 
                * * * * *
                * * * *
                * * *
                * *
                *
*/ 
void pattern5(const int& x){
    for (int i = x; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
/*
    Problem 6 - 
                1 2 3 4 5
                1 2 3 4
                1 2 3
                1 2
                1
*/ 
void pattern6(const int& x){
    for (int i = x; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}
/*
    Problem 7 -  
                 *
                ***
               *****
              *******
             *********
*/
// Thinking->
// 1(1)  [4,1,4]
// 2(3)  [3,3,3]
// 3(5)  [2,5,2]
// 4(7)  [1,7,1]
// 5(9)  [0,9,0]

// (x-i-1),(2xi+1),(x-i-1)

void pattern7(const int& x){
    for (int i = 0; i <= x; i++)
    {
        //space
        for (int j = 0; j <= x-i-1; j++)
        {
            std::cout << " ";
        }
        
        //star
        for (int k = 0; k < 2*i+1; k++)
        {
            std::cout<<"*";
        }
        
        //space
        for (int j = 0; j <= x-i-1; j++)
        {
            std::cout << " ";
        }
        std::cout<< std::endl;
    }
}
/*
Problem 8-
          *********
           *******
            *****  
             ***   
              *    
*/
// [0,7,0]
// [1,5,1]
// [2,3,2]
// [3,1,3]
//My Solution
void pattern8(const int& x){
    for (int i = x; i >= 0; i--)
    {
        //space
        for (int j = 0; j < x-i  ; j++)
        {
            std::cout << " ";
        }
        
        //star
        for (int j = 0; j < 2*i+1; j++)
        {
            std::cout<<"*";
        }
        
        std::cout<< std::endl;
    }
}
// Striver Solution
void patternS8(const int& x){
    for (int i = 0; i < x; i++)
    {
        //space
        for (int j = 0; j < i; j++)
        {
            std::cout << " ";
        }
        
        //star
        for (int j = 0; j < 2*x-(2*i+1); j++)
        {
            std::cout<<"*";
        }
        
        //space
        for (int j = 0; j < i ; j++)
        {
            std::cout << " ";
        }
        std::cout<< std::endl;
    }
}
/*
 Problem 9 -  
              *
             ***
            *****
           *******
          *********
          *********
           *******
            *****  
             ***   
              *    
*/
void pattern9(const int& x){
    
    for (int i = 0; i <= x; i++)
    {
        //space
        for (int j = 0; j <= x-i-1; j++)
        {
            std::cout << " ";
        }
        
        //star
        for (int k = 0; k < 2*i+1; k++)
        {
            std::cout<<"*";
        }
        
        //space
        for (int j = 0; j <= x-i-1; j++)
        {
            std::cout << " ";
        }
        std::cout<< std::endl;
    }
    
    for (int i = x; i >= 0; i--)
    {
        //space
        for (int j = 0; j < x-i  ; j++)
        {
            std::cout << " ";
        }
        
        //star
        for (int j = 0; j < 2*i+1; j++)
        {
            std::cout<<"*";
        }
        
        std::cout<< std::endl;
    }
}
/*
 Problem 10 -
* 
* * 
* * * 
* * * * 
* * * * 
* * * 
* * 
* 
*/
//Thinking -> n=5 , then 2 formulas 1) 2n-1 {for rows} 2) 2n-i {for columns}

void pattern10(const int& x){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = x-1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void patternS10(const int& x){
    for (int i = 1; i <= 2*x-1; i++){
        int stars = i;
        if(i>x) stars=2*x-i;
        for (int j = 1; j <= stars; j++)
        {
            std::cout<< "*" ;
        }
            std::cout<< std::endl;
    }
}

/*
    Problem 11 - 
                1
                0 1
                1 0 1
                0 1 0 1
                1 0 1 0 1
*/ 
void pattern11(const int& x){
    int start=0;
    for(int i=1;i<x;i++){
        if(i%2==0) start=0;
        else start = 1;
        for(int j=0;j<i;j++){
            std::cout<< start;
            start = 1 - start;
        }
        std::cout<<std::endl;
    }
}
/*
    Problem 12 - 
                1             1
                1 2         2 1 
                1 2 3     3 2 1 
                1 2 3 4 4 3 2 1
*/ 
void pattern12(const int& x){
    for(int i=0;i<x;i++){
        //number
        for(int j=1;j<=i;j++){
            std::cout<<j;
        }
         //spaces
        for(int j=2;j<((2*x)-(2*i));j++){
            std::cout<<" ";
        }
         //number
        for(int j=i;j>0;j--){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}
/*
    Problem 13 - 
                1 
                2 3 
                4 5 6 
                7 8 9 10 
                11 12 13 14 15
*/
void pattern13(const int& x){
    int num=1;
    for(int i=0;i<x;i++){
        //number
        for(int j=0;j<=i;j++){
            std::cout<<num<<" ";
            num++;
        }
        std::cout<<std::endl;
    }
}
/*
Problem 14 - 
            A
            AB
            ABC
            ABCD
            ABCDE
*/
void pattern14(const int& x){
    for(int i=0;i<x;i++){
        //number
        for(char j='A';j<='A'+ (x-i-1);j++){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}
/*
Problem 15 - 
            ABCDE
            ABCD
            ABC
            AB
            A
*/
void pattern15(const int& x){
    for(int i=x;i>0;i--){
        //number
        for(char j='A';j<='A'+ i;j++){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}
/*
Problem 16 -
A
BB
CCC
DDDD
*/
void pattern16(const int& x){
    char ch='A';
    for(int i=1;i<x;i++){
        //number
        for(int j=1;j<=i;j++){
            std::cout<<ch;
        }
        ch++;
        std::cout<<std::endl;
    }
}
void pattern16(const int& x){
    char ch='A';
    for(int i=1;i<x;i++){
        //number
        for(int j=1;j<=i;j++){
            std::cout<<ch;
        }
        ch++;
        std::cout<<std::endl;
    }
}

int main(){
    int m,n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin>>m;
        patternS10(m);
    }
    
}
