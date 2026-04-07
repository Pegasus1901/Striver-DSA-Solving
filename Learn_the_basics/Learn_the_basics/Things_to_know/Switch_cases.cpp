#include<iostream>

int main(){
    int x=10;

    switch(x){
        case 10:
            std::cout<<"10"<<std::endl;
            break;
        case 11:
            std::cout<<"11"<<std::endl;
        default:
            std::cout<< x <<std::endl;
            break;
    }
    return 0;
}