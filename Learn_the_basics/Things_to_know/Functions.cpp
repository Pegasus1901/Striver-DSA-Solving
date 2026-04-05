#include <iostream>

//Declare void function 
void noReturn(){
    std::cout<<"Void"<<std::endl;
}
//Declare returnable function
int intReturn(){
    std::cout<<"Int"<<std::endl;
    //if return is not given it will give a garbage return value
    return 1;
}
//Declare parameterized pass by value function
void noName(int a){
    std::cout<<a<<std::endl;
}
//Declare parameterized pass by refrence function
void noName(int& a){
    std::cout<<a<<std::endl;
}
//IMP: Array will always be passed by refrence
void doNothing(int arr[], int n){
    //Here modifying the array will modify original array
    // Some code
}